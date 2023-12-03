from django.shortcuts import render
import datetime


def home(request):
    d = {'author': "Shakib", 'age': 5, 'birthday':datetime.datetime.now(), 'courses': [
        {
            'id': 1,
            'name': 'python',
            'fee': 500,
        },
        {
            'id': 2,
            'name': 'django',
            'fee' : 12000,
        },
        {
            'id': 3,
            'name': 'MySQl',
            'fee' : 2000,
        },
    ]}
    return render(request, 'home.html', d)