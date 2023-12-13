from django.db import models

# Create your models here.
class TaskModel(models.Model):
    taskName = models.CharField(max_length=100)
    taskDescription = models.TextField()
    isCompleted = models.BooleanField(default=False)
    assign_date = models.DateField(auto_now=True)
    
    def __str__(self):
        return f'{self.taskName}'