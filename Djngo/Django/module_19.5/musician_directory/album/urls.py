from django.urls import path
from . import views
urlpatterns = [
    path('add_album/', views.AddAlbumView.as_view(), name ='add_album'),
    path('add_album/edit/<int:pk>', views.EditAlbumView.as_view(), name ='edit_album'),
]
