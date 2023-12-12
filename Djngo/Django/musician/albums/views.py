from django.shortcuts import render, redirect
from . import forms
from albums.models import Album
# Create your views here.
def add_albums(request):
    if request.method == 'POST':
        album_form = forms.AlbumForm(request.POST)
        if album_form.is_valid():
            album_form.save()
            return redirect('home')
    else:   
        album_form = forms.AlbumForm()
    return render(request, 'add_albums.html', {'form': album_form})


def edit_album(request, id):
    album_instance = Album.objects.get(pk=id)
    if request.method == 'POST':
        album_form = forms.AlbumForm(request.POST, instance=album_instance)
        if album_form.is_valid():
            album_form.save()
            return redirect('home')
    else:   
        album_form = forms.AlbumForm(instance=album_instance)
    return render(request, 'add_albums.html', {'form': album_form})


def delete_album(request, id):
    delete = Album.objects.get(pk=id).delete()
    return redirect('home')
    