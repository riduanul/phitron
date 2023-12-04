from django.shortcuts import render
import datetime


# Create your views here.
def about(request):
    data = {"name": "hasan", "age": 20, "birthDay": datetime.datetime.now(), "mobile": None, "siblings": [{ "name": "hanif", "age": 22}, { "name": "Alauddin", "age": 20}, { "name": "jakir", "age": 19}], "favoriteFruits": ["apple", 'mango', 'orange'], "FatherName": "Rezaul Karim Reza",  "Framework": 'Django rest framework', }
    return render(request, "app/about.html", data)

def contact(request):
    return render(request, "app/contact.html")