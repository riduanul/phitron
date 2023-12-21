from django.shortcuts import render, redirect
from . import forms
from django.contrib.auth.forms import AuthenticationForm, PasswordChangeForm
from django.contrib.auth import authenticate, login, logout, update_session_auth_hash
from django.contrib import messages
from django.contrib.auth.decorators import login_required
from posts.models import Post


def signup(request):
    if not request.user.is_authenticated:
        if request.method == 'POST':
            register_form = forms.RegistrationForm(request.POST)
            if register_form.is_valid():
                register_form.save()
                messages.success(request, 'Account Created Successfully')
                return redirect('login')
        else:
            register_form = forms.RegistrationForm()

        return render(request, 'signup.html', {'form': register_form, 'type': 'Signup'})
    else:
        return redirect('profile')
        

def user_login(request):
    if not request.user.is_authenticated:
        if request.method == 'POST':
            login_form = AuthenticationForm(request, request.POST)
            if login_form.is_valid():
                user_name = login_form.cleaned_data['username']
                user_password = login_form.cleaned_data['password']
                user = authenticate(username = user_name, password = user_password)
                if user is not None:
                    messages.success(request, 'Logged in Successfully')
                    login(request, user)
                    return redirect('profile')
                else:
                    messages.success(request, 'Login information is not correct')
                    return redirect('signup') 
        else:
            login_form = AuthenticationForm()               
                
        return render(request, 'signup.html', {'form': login_form, 'type': 'login'})
    else:
        return redirect('profile')

@login_required
def profile(request):
    data = Post.objects.filter(author = request.user)
    return render(request, 'profile.html', {'data': data})



@login_required
def update_profile(request):
    if request.user.is_authenticated:
        if request.method == 'POST':
            profile_form = forms.ChangeUserDataForm(request.POST, instance= request.user )
            if profile_form.is_valid():
                profile_form.save()
                messages.success(request, 'Profile Updated Successfully')
                return redirect('profile')
        else:
            profile_form = forms.ChangeUserDataForm(instance = request.user)
        return render(request, 'update_profile.html',{'form': profile_form, 'user': request.user})
    else:
        return redirect('login')
    
def user_logout(request):
    logout(request)
    return redirect('login')

@login_required
def password_change(request):
        if request.method == 'POST':
            form = PasswordChangeForm(request.user, request.POST )
            if form.is_valid():
                form.save()
                messages.success(request, 'Password Updated Successfully ')
                update_session_auth_hash(request, form.user)
                return redirect('profile')
        else:
            form = PasswordChangeForm(request.user)

        return render(request, 'password_change.html', {'form': form})


