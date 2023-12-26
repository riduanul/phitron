from django.urls import path
from . import views
from django.contrib.auth.views import LogoutView
urlpatterns = [
    path('signup/', views.signup, name= 'signup'),
    # path('login/', views.user_login, name= 'login'),
    path('login/', views.UserLoginView.as_view(), name= 'login'),
    # path('logout/', views.user_logout, name= 'logout'),
    path('logout/', views.UserLogoutView.as_view(), name= 'logout'),
    path('profile/', views.profile, name= 'profile'),
    path('profile/password_change/', views.password_change, name= 'password_change'),
    path('profile/update_profile/', views.update_profile, name= 'update_profile'),
]