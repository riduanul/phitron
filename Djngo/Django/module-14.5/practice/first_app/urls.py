from django.urls import path
from . import views

urlpatterns = [
    path('', views.form, name='form'),
    path('user/', views.user, name='user'),
    path('add/>', views.addStudent, name='add'),
    path('delete/<int:roll>', views.deleteUser, name='delete')
]
