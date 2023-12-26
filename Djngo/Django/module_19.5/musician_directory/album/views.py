from django.shortcuts import render
from django.urls import reverse_lazy  
from album.models import Album
from . import forms
from django.views.generic import CreateView, UpdateView
from django.utils.decorators import method_decorator
from django.contrib.auth.decorators import login_required
# Create your views here.

@method_decorator(login_required, name='dispatch')
class AddAlbumView(CreateView):
    model = Album
    template_name = 'add_album.html'
    form_class = forms.AlbumForm
    success_url = reverse_lazy ('home')

@method_decorator(login_required, name='dispatch')
class EditAlbumView(UpdateView):
    model = Album
    template_name = 'add_album.html'
    form_class = forms.AlbumForm
    
    def get_success_url(self):
        return reverse_lazy('home')
    
    
    
    
