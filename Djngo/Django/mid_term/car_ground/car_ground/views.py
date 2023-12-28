from django.shortcuts import render,redirect, get_object_or_404
from cars.models import Car,Brand, Order
from django.views.generic import DetailView, ListView
from cars.forms import CommentForm
from django.contrib import messages

def home(request, brand_slug=None):
    cars = Car.objects.all()
    brands = Brand.objects.all()
    if brand_slug is not None:
        brand = get_object_or_404(Brand, slug = brand_slug)
        cars = Car.objects.filter(brand=brand)
    return render(request, 'base.html', {'cars':cars, 'brands': brands})



class CarDetailView(DetailView):
    model = Car
    template_name = 'details.html'
    context_object_name = 'car'
    
    def post(self, request, *args, **kwargs):
        comment_form = CommentForm(data = self.request.POST)
        car = self.get_object()
        
        if 'comment_btn_submit' in request.POST:
            if comment_form.is_valid():
                new_comment = comment_form.save(commit=False)
                new_comment.car = car
                new_comment.save()
                return redirect('details', pk = car.pk)
            else:
                messages.error(request, "invalid comment")
        elif 'buy_btn_submit' in request.POST:
                if car.quantity <= 0:
                    messages.error(request, "Out of Stock")
                else:
                    Order.objects.create(user=request.user, car=car, quantity=1)
                    car.quantity -= 1
                    car.save()
                    messages.success(request, "Purchase successful!")
            
        return self.get(request, *args, **kwargs)
    
    def get_context_data(self, **kwargs):
        context = super().get_context_data(**kwargs)
        car = self.object
        comments = car.comments.all()
        comment_form = CommentForm()
        
        context['comments'] = comments
        context['comment_form'] = comment_form
        return context


    
    