from django.shortcuts import render
from datetime import datetime, timedelta
from django.http import HttpResponse

def home(request):
    response = render(request, 'home.html')
    response.set_cookie('name', 'rizwan')
    response.set_cookie('name', 'munna', expires = datetime.utcnow()+timedelta(days=7))
    return response

def get_cookie(request):
    name = request.COOKIES.get('name')
    print(request.COOKIES)
    return render(request, 'get_cookie.html', {'name': name})

def delete_cookie(request):
    response = render(request, 'delete_cookie.html')
    response.delete_cookie('name')
    return response
    

def set_session(request):
    data = {
        'name' : 'rizwan',
        'age' : 23,
        'language' : 'bangla'
    }
    print(request.session.get_session_cookie_age())
    print(request.session.get_expiry_date())
    request.session.update(data)
    request.session.save()
    return render(request, 'home.html')

def get_session(request):
    if 'name' in request.session:
        name = request.session.get('name', 'guest')
        age = request.session.get('age')
        request.session.modified = True
        return render(request, 'get_session.html', {'name': name, 'age': age})
    else:
        return HttpResponse("Your session has been expired please login")

def delete_session(request):
    request.session.flush()
    request.session.clear_expired()
    return render(request, 'delete_cookie.html')