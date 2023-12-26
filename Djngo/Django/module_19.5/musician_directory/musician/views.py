from django.shortcuts import render, redirect
from . import models
from . import forms
from django.urls import reverse_lazy
from django.views.generic import CreateView, UpdateView, DeleteView
from django.contrib.auth.views import LoginView, LogoutView
from django.utils.decorators import method_decorator
from django.contrib.auth.decorators import login_required
from . import forms
from django.contrib import messages
# Create your views here.

def signup(request):
    if request.method == 'POST':
        form = forms.Signup(request.POST)
        if form.is_valid():
            form.save()
            messages.success(request, "Signup Successful")
            return redirect('login')
    else:
        form = forms.Signup()
    
    return render(request, 'signup.html', {'form': form})

class UserLoginView(LoginView):
    template_name = 'login.html'
    
    def form_valid(self, form):
        messages.success(self.request, 'Logged in Successful')
        return super().form_valid(form)

    def form_invalid(self, form):
        messages.error(self.request, 'Logged in information is incorrect')
        return super().form_invalid(form)

    def get_success_url(self):
        return reverse_lazy('home')


class UserLogoutView(LogoutView):
      def get_success_url(self):
        return reverse_lazy('login')

@method_decorator(login_required, name='dispatch')
class AddMusicianView(CreateView):
    model = models.Musician
    form_class = forms.AddMusicianForm
    template_name = 'add_musician.html'
    success_url = reverse_lazy('home')

@method_decorator(login_required, name='dispatch')
class EditMusicianView(UpdateView):
    model = models.Musician
    form_class = forms.AddMusicianForm
    template_name = 'add_musician.html'

    def get_success_url(self):
        return reverse_lazy('home')

@method_decorator(login_required, name='dispatch')
class DeleteMusicianView(DeleteView):
    model = models.Musician
    template_name = 'delete.html'
    

    def get_success_url(self):
        return reverse_lazy('home')




