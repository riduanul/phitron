from django.shortcuts import render
from task.models import TaskModel

def showTask(request):
    show_task = TaskModel.objects.all()
    return render(request, 'base.html', {'tasks': show_task})