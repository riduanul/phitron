from django.shortcuts import render
from . forms import  DjangoForm
# Create your views here.
def about(request):
    
    return render(request, 'form.html', )

def ratings(request):
    if request.method == 'POST':
        print(request.POST)
        name = request.POST.get('name')
        email = request.POST.get('email')
        rating = request.POST.get('select')
        return render(request, 'user.html', {'name':name, 'email':email, 'rating': rating})
    
    else:
        return render(request, 'about.html', )

def djangoForm(request):
    if request.method == 'POST':
        form = DjangoForm(request.POST, request.FILES)
        if form.is_valid() :
            file = form.cleaned_data['file']
            with open('./about/upload/' + file.name, 'wb+') as destination:
                for chunk in file.chunks():
                    destination.write(chunk)
            print(form.cleaned_data)
    else:
        form = DjangoForm()
    return render(request, 'django_form.html', {'form': form})