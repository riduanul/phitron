from django.shortcuts import render, redirect
from django.urls import reverse_lazy
from . import forms
from . models import Post
from django.contrib.auth.decorators import login_required
from django.utils.decorators import method_decorator
from django.views.generic import CreateView,UpdateView,DeleteView,DetailView
# Create your views here.
# @login_required
# def add_post(request):
#     if request.method == "POST":
#         post = forms.PostForm(request.POST)
#         if post.is_valid():
#             post.instance.author = request.user
#             post.save()
#             return redirect('home')
#     else:
#         post = forms.PostForm()
        
#     return render(request, 'add_post.html', {'post': post})

#  class based view
@method_decorator(login_required, name='dispatch')
class AddPostCreateView(CreateView):
    model = Post
    form_class = forms.PostForm
    template_name = 'add_post.html'
    success_url = reverse_lazy('home')
    
    def form_valid(self, form):
        form.instance.author = self.request.user
        return super().form_valid(form)
        
# @login_required
# def edit_post(request, id):
#     post_instance = Post.objects.get(pk=id)

#     if request.method == 'POST':
#         post_form = forms.PostForm(request.POST, instance=post_instance)
#         if post_form.is_valid():
#             post_form.instance.author = request.user
#             post_form.save()
#             return redirect('home')
#     else:
#         post_form = forms.PostForm(instance=post_instance)

#     return render(request, 'add_post.html', {'post': post_form})


# class based edit or update view
@method_decorator(login_required, name='dispatch')
class EditPostView(UpdateView):
    model = Post
    form_class = forms.PostForm
    template_name= 'add_post.html'
    pk_url_kwarg = 'id'
    success_url = reverse_lazy('home')

# @login_required
# def delete_post(request, id):
#     post = Post.objects.get(pk = id).delete()
#     return redirect('home')

# class based delete view
@method_decorator(login_required, name='dispatch')
class DeletePostView(DeleteView):
    model = Post
    template_name = 'delete.html'
    success_url = reverse_lazy('home')
    pk_url_kwarg = 'id'    


class DetailPostView(DetailView):
    model = Post
    template_name = 'post_details.html'
    pk_url_kwarg = 'id'
    
  
    @method_decorator(login_required, name='dispatch')
    def post(self, request, *args, **kwargs):
        comments_form = forms.CommentForm(data = self.request.POST)
        post = self.get_object()
        if comments_form.is_valid():
            new_comment = comments_form.save(commit=False)
            new_comment.post = post
            new_comment.save()
        return self.get(request, *args, **kwargs)
    
    def get_context_data(self, **kwargs):
        context = super().get_context_data(**kwargs)
        post = self.object #post model er objecct
        comments = post.comments.all()
        comments_form = forms.CommentForm()
        
        context['comments'] = comments
        context['comments_form'] = comments_form
        return context
        
        


    