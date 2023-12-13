from django.shortcuts import render, redirect
from . import forms
from task.models import TaskModel

# Create your views here.

def add_task(request):
    
    if request.method == 'POST':
        task_form = forms.TaskForm(request.POST)
        print(task_form.changed_data)
        if task_form.is_valid():
            task_form.save()
            return redirect('home')
    
    else:
        task_form = forms.TaskForm()
    
    return render(request, 'add_task.html', {'form': task_form })

def edit_task(request, id):
    task_instance = TaskModel.objects.get(pk=id)
    if request.method == 'POST':
        task_form = forms.TaskForm(request.POST, instance=task_instance)
        if task_form.is_valid():
            task_form.save()
            return redirect('home')
    
    else:
        task_form = forms.TaskForm(instance=task_instance)
    
    return render(request, 'add_task.html', {'form': task_form })

def delete_task(request, id):
    delete_task = TaskModel.objects.get(pk=id).delete()
    return redirect('home')


def complete_task(request, id):
    complete_task = TaskModel.objects.get(pk=id)
    complete_task.isCompleted = not complete_task.isCompleted
    complete_task.save()
    return redirect('home')