from django import forms
from musician.models import Musician
from django.contrib.auth.models import User
from django.contrib.auth.forms import UserCreationForm
class AddMusicianForm(forms.ModelForm):
    class Meta:
        model = Musician
        fields = '__all__'


class Signup(UserCreationForm):
    class Meta:
        model= User
        fields = ['username', 'first_name', 'last_name', 'email']
        