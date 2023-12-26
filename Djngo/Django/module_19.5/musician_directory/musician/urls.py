from django.urls import path
from . import views
urlpatterns = [
    path('signup', views.signup, name='signup'),
    path('login', views.UserLoginView.as_view(), name='login'),
    path('logout', views.UserLogoutView.as_view(), name='logout'),
    path('add_musician', views.AddMusicianView.as_view(), name='add_musician'),
    path('add_musician/edit/<int:pk>', views.EditMusicianView.as_view(), name='edit_musician'),
    path('add_musician/delete/<int:pk>', views.DeleteMusicianView.as_view(), name='delete_musician'),
    
]
