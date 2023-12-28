
from django.contrib import admin
from django.urls import path, include
from django.conf.urls.static import static
from django.conf import settings
from . import views
urlpatterns = [
    path('admin/', admin.site.urls),
    path('', views.home , name ='home'),
    path('brand/<slug:brand_slug>/', views.home, name='filter'),
    path('<int:pk>', views.CarDetailView.as_view() , name ='details'),
    path('cars/', include('cars.urls')),
    path('user/', include('user.urls')),
]

urlpatterns += static(settings.MEDIA_URL,document_root=settings.MEDIA_ROOT)

