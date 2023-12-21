from django.urls import path
from . import views
urlpatterns = [
    path('signup/', views.signup, name= 'signup'),
    path('login/', views.user_login, name= 'login'),
    path('logout/', views.user_logout, name= 'logout'),
    path('profile/', views.profile, name= 'profile'),
    path('profile/password_change/', views.password_change, name= 'password_change'),
    path('profile/update_profile/', views.update_profile, name= 'update_profile'),
]