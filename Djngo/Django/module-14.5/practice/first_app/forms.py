from django import forms
from django.core import validators
from . models import StudentModel

# class djangoForm(forms.Form):
#     name = forms.CharField(label ='User Name :', initial='rizwan')
#     email = forms.EmailField(label='Email :')
#     father_name = forms.CharField(label ='Father Name :')
#     age =forms.IntegerField(validators=[validators.MaxValueValidator(32, message='Maximum age 32'), 
#                                         validators.MinValueValidator(18, message="Minimum age 18")])
#     birthdate = forms.DateField(widget=forms.NumberInput(attrs={'type':'date'}))
#     agree = forms.BooleanField()
#     favorite = [('blue', 'Blue'), ('gree', 'Green'), ('red', 'Red')]
#     favorite_color = forms.ChoiceField(choices = favorite)
#     choices= [('m', 'Male'), ('f', 'Female') ]
#     gender= forms.ChoiceField(widget=forms.RadioSelect, choices = choices)
#     foods = [('b', 'Burger'), ('p','pizza'), ('f', 'french_fry')]
#     favorite_food = forms.MultipleChoiceField(choices=foods, widget=forms.CheckboxSelectMultiple)
#     upload_picture = forms.FileField()
#     address = forms.CharField(widget=forms.Textarea)
    
#     def clean(self):
#         cleaned_data = super().clean()
        
#         vlname = self.cleaned_data['name']
#         vlemail = self.cleaned_data['email']
        
#         if len(vlname) < 10 :
#             raise forms.ValidationError('at least 10 charecter needed')
        
#         if '.com' not in vlemail:
#             raise forms.ValidationError('invalid email')

class StudentForm(forms.ModelForm):
    class Meta:
        model = StudentModel
        fields = '__all__'
        labels = {
            'name' : 'User Name:',
            'father': 'Father Name:',
             
        }
        error_message = {
            'name' : {'required' : 'Your Name is Required'}
        }