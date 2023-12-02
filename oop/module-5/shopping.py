class Shopping:
    def __init__(self, name):
        self.name = name
        self.cart = []
    
    def add_to_cart(self, item, price, quantity):
        product = {'item' : item, 'price' : price, 'quantity' : quantity}
        self.cart.append(product)

    def checkout(self, amount):
        total = 0
        for item in self.cart:
            total += item['price'] * item['quantity']
        print('Total Price: ', total)
        if amount < total:
            print(f'Please provide {total - amount} more')
        elif amount > total:
            print(f'Please take the change {amount- total} and here your products. thank you sir, have a good day!!')
        else: 
            print(f'Thank you sir,Here your products. have a good day')

    def remove_item(self, item):
        for it in self.cart:
            if it['item'] == item:
             pass     
            
swapan = Shopping('Alan Swapan')
swapan.add_to_cart('alu', 50 , 6)
swapan.add_to_cart('dim', 12 , 24)
swapan.add_to_cart('rice', 5 , 50)
print(swapan.cart)
# print(swapan.checkout(1000))
