from django.urls import path
from . import views


urlpatterns = [
    path('signup/', views.signup, name='signup'),
    path('login/', views.user_login, name='login'),
    path('logout/', views.user_logout, name='logout'),
    path('profile/', views.profile, name='profile'),
    path('profile/change_password/', views.password_change, name='change_password'),
    path('profile/change_password_2/', views.password_change_2, name='change_password_2'),
    path('profile/update_profile/', views.update_profile, name='update_profile'),
]
