from django.shortcuts import render, redirect
from django.views.generic import ListView, UpdateView
from django.contrib.auth.views import LoginView, LogoutView
from django.contrib.auth.models import User
from . import forms
from django.urls import reverse_lazy
from cars.models import Order
from django.contrib import messages
# Create your views here.

def signup(request):
   if request.method == 'POST':
       form = forms.SignupForm(request.POST)
       if form.is_valid():
           form.save()
           return redirect('login')
   else:
        form = forms.SignupForm()
   
   return render(request, 'signup.html', {'form': form}) 

class UserLoginView(LoginView):
    model = User
    template_name = 'login.html'
   
    def form_valid(self, form):
        return super().form_valid(form)
    
    def form_invalid(self, form):
        return super().form_invalid(form)
    
    def get_success_url(self):
        return reverse_lazy('home')

def updateUser(request):
    if request.user.is_authenticated:
        if request.method == 'POST':
            form = forms.UpdateUserForm(request.POST, instance= request.user)
            if form.is_valid():
                form.save()
                messages.success(request, 'Profile updated successfully')
                return redirect('profile')
        else:
            form = forms.UpdateUserForm(instance= request.user)
        return render(request, 'update_profile.html', {'form':form})
            
    else:
        return redirect('login')
    
    

def profile(request):
    return render(request, 'profile.html', {'user': request.user})

class UserLogoutView(LogoutView):
      def get_success_url(self):
        return reverse_lazy('login')
    

class OrderHistoryView(ListView):
    model = Order
    template_name = 'profile.html'
    context_object_name = 'orders'

    def get_queryset(self):
        return Order.objects.filter(user=self.request.user)




