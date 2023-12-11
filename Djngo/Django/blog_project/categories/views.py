from django.shortcuts import render, redirect
from . import forms
# Create your views here.
def add_categories(request):
    if request.method == 'POST':
        categories = forms.CategoriesForm(request.POST)
        if categories.is_valid():
            categories.save()
            redirect('add_categories')
    else:
        categories = forms.CategoriesForm() 
    return render(request, 'add_categories.html', {'categories': categories})