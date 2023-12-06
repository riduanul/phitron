
from django.contrib import admin
from django.urls import path,include
from . import views
urlpatterns = [
    path('admin/', admin.site.urls),
    path('', views.home, name='home'),
    path('items/', include('show_items.urls')),
    path('about/', include('about_us.urls')),
]
