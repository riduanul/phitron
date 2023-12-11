from django.shortcuts import render,redirect
from . import forms
# Create your views here.
def add_profile(request):
    if request.method == 'POST':
        profile = forms.ProfileForm(request.POST)
        if profile.is_valid():
            profile.save()
            redirect('add_profile')
    else:
        profile = forms.ProfileForm()
        
    return render(request, 'add_profile.html', {'profile': profile})