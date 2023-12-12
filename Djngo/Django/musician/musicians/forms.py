from django import forms
from .models import Musicians

class MusiciansForm(forms.ModelForm):
    class Meta:
        model = Musicians
        fields = '__all__'
