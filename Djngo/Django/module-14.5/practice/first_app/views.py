from django.shortcuts import render, redirect
# from . forms import djangoForm
from first_app.forms import StudentForm
from . import models
# Create your views here.
# for form api
# def home(request):
#     if request.method == 'POST':
#         form = djangoForm(request.POST, request.FILES)
#         if form.is_valid():
#             print(form.cleaned_data)
#             file = form.cleaned_data['upload_picture']
#             with open('./first_app/upload' + file.name, 'wb+') as destination:
#                 for chunk in file.chunks():
#                     destination.write(chunk)
#                 print(form.cleaned_data)
#     else:
#         form = djangoForm()
#     return render(request, 'home.html', {'form': form})

# for models 
def form(request):
    if request.method == 'POST':
        form = StudentForm(request.POST)
        if form.is_valid():
            form.save()
            print(form.cleaned_data)
    else:
        form = StudentForm()
    
    
    return render(request, 'home.html', {'form': form})


def user(request):
    user = models.StudentModel.objects.all()
    print(user)
    return render(request, 'user.html', {'user': user})

def deleteUser(request, roll):
    user = models.StudentModel.objects.get(pk = roll).delete()
    return redirect('/first_app/user/')
        