from django.urls import path, include
from . import views

urlpatterns = [
    path('', views.about, name='about'),
    path('ratings/', views.ratings, name='ratings'),
    path('django_form/', views.djangoForm, name='djangoForm')
]