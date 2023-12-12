from django.shortcuts import render
from albums.models import Album

def home(request):
    data = Album.objects.all()
    return render(request, 'base.html', {'data': data})