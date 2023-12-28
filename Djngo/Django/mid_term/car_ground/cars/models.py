from django.db import models
from django.contrib.auth.models import User

# Create your models here.
class Brand(models.Model):
    brand_name = models.CharField(max_length=50)
    slug = models.SlugField(max_length=100, unique= True, null=True, blank=True)
    def __str__(self):
        return f'{self.brand_name}'

class Car(models.Model):
    car_name = models.CharField(max_length=50)
    price = models.CharField(max_length=50)
    brand = models.ForeignKey(Brand, on_delete=models.CASCADE)
    description = models.TextField()
    quantity = models.PositiveIntegerField(default=0)
    image = models.ImageField(upload_to='cars/media/', blank= True, null=True)
    
    def __str__(self):
        return f' {self.car_name}{self.brand.brand_name}'

class Order(models.Model):
    user = models.ForeignKey(User,on_delete=models.CASCADE, null=True)
    car = models.ForeignKey(Car, on_delete=models.CASCADE)
    order_date = models.DateField(auto_now_add = True)
    quantity= models.PositiveIntegerField(default=0)
    
class Comment(models.Model):
    car = models.ForeignKey(Car, on_delete=models.CASCADE, related_name='comments', null=True)
    name = models.CharField(max_length=100)
    date = models.DateField(auto_now_add = True)
    comment = models.TextField()
    
    def __str__(self):
        return f'{self.name}'
