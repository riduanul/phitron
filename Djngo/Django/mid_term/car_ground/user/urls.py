from django.urls import path
from . import views

urlpatterns = [
    path('login', views.UserLoginView.as_view() , name ='login'),
    path('logout', views.UserLogoutView.as_view() , name ='logout'),
    path('signup', views.signup, name ='signup'),
    path('profile', views.OrderHistoryView.as_view(), name='profile'),
    path('profile/update_profile/', views.updateUser, name='update'),
    
]
