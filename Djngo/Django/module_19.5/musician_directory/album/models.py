from django.db import models
from musician.models import Musician
# Create your models here.

class Album(models.Model):
    album_name = models.CharField(max_length= 100)
    musician = models.ForeignKey(Musician, on_delete=models.CASCADE)
    release_date = models.DateField(auto_now_add = True)
    choices = [
        ('1', (1)),
        ('2', (2)),
        ('3', (3)),
        ('4', (4)),
        ('5', (5))
    ]
    ratings = models.CharField(choices=choices, max_length = 2)
    
    def __str__(self):
        return f'{self.album_name}'
