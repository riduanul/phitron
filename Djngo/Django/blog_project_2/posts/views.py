from django.shortcuts import render, redirect
from . import forms
from . models import Post
from django.contrib.auth.decorators import login_required

# Create your views here.
@login_required
def add_post(request):
    if request.method == "POST":
        post = forms.PostForm(request.POST)
        if post.is_valid():
            post.instance.author = request.user
            post.save()
            return redirect('home')
    else:
        post = forms.PostForm()
        
    return render(request, 'add_post.html', {'post': post})

@login_required
def edit_post(request, id):
    post_instance = Post.objects.get(pk=id)

    if request.method == 'POST':
        post_form = forms.PostForm(request.POST, instance=post_instance)
        if post_form.is_valid():
            post_form.instance.author = request.user
            post_form.save()
            return redirect('home')
    else:
        post_form = forms.PostForm(instance=post_instance)

    return render(request, 'add_post.html', {'post': post_form})

@login_required
def delete_post(request, id):
    post = Post.objects.get(pk = id).delete()
    return redirect('home')



    