class Product:
    def __init__(self, name, price, quantity) -> None:
        self.name = name
        self.price = price
        self.quantity = quantity
    
    def __repr__(self) -> str:
        return f"product: {self.name} - Price: {self.price} ({self.quantity} available)"


class Shop:
    def __init__(self) -> None:
        self.products = []
    
    def add_product(self, product):
        if isinstance(product, Product):
            self.products.append(product)
            print(f'Product {product.name} added to the shop')
        else:
            print("Invalid Product! Please provide a product object")

    def buy_product(self, product_name):
        for product in self.products:
            if product.name == product_name:
               if product.quantity > 0:
                   product.quantity -= 1
                   print(f'Congratulations! you buy {product.name} for {product.price}')
                   break
               else:
                   print(f'{self.product_name} is out of stock!')
            else:
                print(f'{product_name} is not available in shop')
                    
# create product with Product class
laptop = Product("Laptop", 20000, 5)
mobile = Product("mobile", 10000, 5)

# create shop with Shop class
shop = Shop()

# add products in shop
shop.add_product(laptop)
shop.add_product(mobile)

# Buy products from shop
shop.buy_product('Laptop')