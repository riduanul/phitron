
from django.contrib import admin
from django.urls import path
from . import views
urlpatterns = [
    path('admin/', admin.site.urls),
    # path('', views.home, name='home'),
    path('', views.set_session, name='home'),
    path('get', views.get_session, name='get_session'),
    path('cookie', views.get_cookie, name='cookie'),
    path('del', views.delete_cookie, name='del_cookie'),
    path('dels', views.delete_session, name='del_session')
]
