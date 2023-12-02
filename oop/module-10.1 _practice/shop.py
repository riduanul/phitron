class Shop:
    def __init__(self, name) -> None:
        self.name = name
        self.sellers = []
        self.customers= []    
        self.products = {}
        self.users = []
        
    def __repr__(self) -> str:
        print(f'Shop name: {self.name} has been created')
    
    def add_product(self, product):
        self.products[product.name] : product.as_tuple()
        print(f'product: {product.name} has been added')
   
    def view_products(self):
        for product in self.products:
            print('.....................')    
            print('name \t price \t quantity')
            print (f'{product.name}: \t ({product.price}, {product.quantity})')
            print('.....................')    



class User:
    def __init__(self, name, email, password) -> None:
        self.name = name
        self.email = email
        self.password = password


class Customer(User):
    def __init__(self, name, email, password) -> None:
        super().__init__(name, email, password)
        self.cart = []
        self.type = 'customer'
        customer = name, email, password
        # shop.customers.append(customer)
        
        
    def place_order(self):
        pass

    def view_products(self, shop):
        for product in shop.products:
            print('.....................')    
            print('name \t price \t quantity')
            print (f'{product.name}: \t ({product.price},{product.quantity})')
            print('.....................')   
            
class Seller(User):
    def __init__(self, name, email, password) -> None:
        super().__init__(name, email, password)
        self.type ='seller'
        
    def create_account(self, shop, name, email, password):
        seller.type = 'seller'
        seller = name, email, password
        shop.sellers.append(seller)
    
    def add_product(self, shop, name, price, quantity):
        product = name, price, quantity
        shop.products.append(product)
        
class Product:
    def __init__(self, name, price, quantity) -> None:
        self.name = name
        self.price = price
        self.quantity = quantity
    
    def as_tuple(self):
        return (self.price, self.quantity)

class Order:
    def __init__(self, customer, item, quantity) -> None:
        self.customer = customer
        self.item = item
        self.quantity = quantity
        

# create shop
big_bazar = Shop('big-bazar')

# create product
alu = Product('alu', 45, 20)

# add Product
big_bazar.add_product(alu)


while True:
    print('Pres 1 for sign Up As a customer')
    print('Pres 2 for sign Up As a seller')
    print('Pres 3 for Login')
    ch = int(input())
    
    if ch == 1:
        name = input("Enter Your Name: ")
        email = input("Enter Your Email: ")
        password = input("Enter Your Password: ")
        Customer(name, email, password)
        print()
        print("Your signup is successful. please press 3 to login")
        print()

    elif ch == 2:
        name = input("Enter Your Name: ")
        email = input("Enter Your Email: ")
        password = input("Enter Your Password: ")
        Seller(name, email, password)
        print()
        print("Your signup is successful. please press 3 to login")
        print()
        
                
    elif ch == 3:
        email = input("Enter Your Email: ")
        password = input("Enter Your Password: ")
        

                