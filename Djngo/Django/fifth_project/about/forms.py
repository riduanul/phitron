from django import forms
#widgets == field to html input

class DjangoForm(forms.Form):
    name = forms.CharField(label='User Name')
    email = forms.EmailField(label='User Email')
    age = forms.IntegerField()
    weight = forms.FloatField()
    balance = forms.DecimalField()
    check = forms.BooleanField()
    birthday = forms.DateField(widget=forms.DateInput(attrs={'type' : 'date'}))
    appointment = forms.DateTimeField(widget = forms.DateInput(attrs = {'type': "datetime-local"}))
    CHOICES = [('S', 'Small'), ('M', 'Medium'), ('L', 'Large')]
    size = forms.ChoiceField(choices = CHOICES, widget = forms.RadioSelect)
    ingredient = [('P', 'Pepperoni'), ('M', 'Mashroom'), ('B', 'Beef')]
    pizza = forms.MultipleChoiceField(choices = ingredient, widget=forms.CheckboxSelectMultiple)
    file = forms.FileField()
    
    # def clean_name(self):
    #     nameValue = self.cleaned_data['name']
        
    #     if len(nameValue) < 10:
    #         raise forms.ValidationError("At least 10 Character Needed ")
    #     else:
    #         return nameValue
        
        
    # def clean_email(self):
    #     emailValue = self.cleaned_data['email']
    #     if '.com' not in emailValue:
    #         raise forms.ValidationError('Your email must contain .com')
    #     else:
    #         return emailValue
    
    def clean(self):
        cleaned_data = super().clean()
        nameValue = self.cleaned_data['name']
        emailValue = self.cleaned_data['email']
        
        if len(nameValue) < 10:
            raise forms.ValidationError("At least 10 Character Needed ") 
        
        if '.com' not in emailValue:
            raise forms.ValidationError('Your email must contain .com')