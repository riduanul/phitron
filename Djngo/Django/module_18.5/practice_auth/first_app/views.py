from django.shortcuts import render,redirect
from . import forms
from django.contrib import messages
from django.contrib.auth.forms import AuthenticationForm, PasswordChangeForm, SetPasswordForm
from django.contrib.auth import authenticate, login, logout, update_session_auth_hash
from django.contrib.auth.decorators import login_required
# Create your views here.


def signup(request):
    if request.method == 'POST':
        signup_form = forms.RegistrationForm(request.POST) 
        if signup_form.is_valid():
            messages.success(request, "You Account Successfully created")
            signup_form.save()
            return redirect('login')
        
    else:
        signup_form = forms.RegistrationForm()
    
    return render(request, 'signup.html', {'form': signup_form, 'type': 'Signup'})


def user_login(request):
    if request.method == 'POST':
        form = AuthenticationForm(request, request.POST)
        if form.is_valid():
            username = form.cleaned_data['username']
            password = form.cleaned_data['password']
            user = authenticate(username=username, password= password)
            if user is not None:
                messages.success(request, "Logged in Successfully")
                login(request, user)
                return redirect('profile')
            else:
                messages.warning(request, "User Information Incorrect")
                return redirect('login')
    else:
        form = AuthenticationForm()
                
    return render(request, 'signup.html', {'form': form, 'type': 'Login'})


def user_logout(request):
    logout(request)
    messages.success(request, 'Logged out Successfully')
    return redirect('login')
    
@login_required
def profile(request):
    
    return render(request, 'profile.html', {'user': request.user})


@login_required
def password_change(request):
    if request.method == 'POST':
        form = PasswordChangeForm(request.user, request.POST)
        if form.is_valid():
            form.save()
            messages.success(request, 'Password Updated Successfully')
            update_session_auth_hash(request, form.user)
            return redirect('profile')
    else:
        form = PasswordChangeForm(request.user)
    
    return render(request, 'password_change.html', {'form': form})

@login_required
def password_change_2(request):
    if request.method == 'POST':
        form = SetPasswordForm(request.user, request.POST)
        if form.is_valid():
            form.save()
            messages.success(request, 'Password Updated Successfully')
            update_session_auth_hash(request, form.user)
            return redirect('profile')
    else:
        form = SetPasswordForm(request.user)
    
    return render(request, 'password_change.html', {'form': form})


@login_required
def update_profile(request):
    if request.method == 'POST':
        form = forms.UpdateProfileForm(request.POST, instance=request.user )
        if form.is_valid():
            form.save()
            messages.success(request, "Profile Updated Successfully")
            return redirect('profile')
    else:
        form = forms.UpdateProfileForm(instance= request.user)
    
    
    return render(request, 'update_profile.html', {'form':form})