class Shop:
    shopping_mall = 'Jamuna'
    
    def __init__(self, buyer):
        self.buyer = buyer
        self.cart = [] #cart is an instance attribute
    
    def add_to_cart(self, item):
        self.cart.append(item)


mehzabeen = Shop('MehJabeen')
mehzabeen.add_to_cart('bag')
mehzabeen.add_to_cart('lipstick')
mehzabeen.add_to_cart('shoes')
print(mehzabeen.cart)

nisho = Shop('Nisho')
nisho.add_to_cart('Watch')
nisho.add_to_cart('belt')
nisho.add_to_cart('sunglass')
print(nisho.cart)