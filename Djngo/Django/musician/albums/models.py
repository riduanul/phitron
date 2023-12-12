from django.db import models
from musicians.models import Musicians
# Create your models here.
class Album(models.Model):
    album_name = models.CharField(max_length=50)
    musician = models.ForeignKey(Musicians, on_delete=models.CASCADE)
    release_date = models.DateField(auto_now_add=True)
    rating_choice = [
        ('1', (1)),
        ('2', (2)),
        ('3', (3)),
        ('4', (4)),
        ('5', (5)),
    ]
    rating = models.CharField(choices=rating_choice, max_length=10)
    
    def __str__(self):
        return f'{self.album_name}'
    
    