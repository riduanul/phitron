from django.shortcuts import render,redirect
from . import forms
from musicians.models import Musicians
# Create your views here.
def add_musicians(request):
    if request.method == 'POST':
        musicians_form = forms.MusiciansForm(request.POST)
        if musicians_form.is_valid():
            musicians_form.save()
            return redirect('home')
    else: 
        musicians_form = forms.MusiciansForm()
             
    return render(request, 'add_musicians.html', {'form': musicians_form})

def edit_musicians(request, id):
    musician_instance = Musicians.objects.get(pk=id)
    
    if request.method == 'POST':
        musicians_form = forms.MusiciansForm(request.POST, instance= musician_instance)
        if musicians_form.is_valid():
            musicians_form.save()
            return redirect('home')
    else: 
        musicians_form = forms.MusiciansForm(instance= musician_instance)
             
    return render(request, 'add_musicians.html', {'form': musicians_form})