from django.shortcuts import render, redirect
from . import forms
from . models import Post
# Create your views here.
def add_post(request):
    if request.method == "POST":
        post = forms.PostForm(request.POST)
        if post.is_valid():
            post.save()
            redirect('add_post')
    else:
        post = forms.PostForm()
        
    return render(request, 'add_post.html', {'post': post})


def edit_post(request, id):
    post_instance = Post.objects.get(pk=id)

    if request.method == 'POST':
        post_form = forms.PostForm(request.POST, instance=post_instance)
        if post_form.is_valid():
            post_form.save()
            return redirect('home')
    else:
        post_form = forms.PostForm(instance=post_instance)

    return render(request, 'add_post.html', {'post': post_form})


def delete_post(request, id):
    post = Post.objects.get(pk = id).delete()
    return redirect('home')
    
    