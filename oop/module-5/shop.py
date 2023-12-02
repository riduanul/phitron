class Shop:
    cart =[] #cart is a class attribute
    def __init__(self, buyer):
        self.buyer = buyer
    
    def add_to_cart(self, item):
       self.cart.append(item)


mehzabeen = Shop('meh jabeen')
mehzabeen.add_to_cart('shoes')
mehzabeen.add_to_cart('phone')
print(mehzabeen.cart)
nisho = Shop('Nisho')
nisho.add_to_cart('bag')
nisho.add_to_cart('watch')
nisho.add_to_cart('cap')
print(nisho.cart)