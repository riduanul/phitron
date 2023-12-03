class Shopping:
    cart = [] # class attribute # static attribute
    origin = 'china'

    def __init__(self, name, location) -> None:
        self.name = name #instance attribute
        self.location = location

    def purchase(self, item, price, amount):
        remaining = amount - price
        print(f'buying: {item} for price: {price} and remaining {remaining}')

    @classmethod
    def multi(a, b):
        return a*b

    @staticmethod
    def add(self, a, b):
        print(self.name)
        return a+b


#Shopping.purchase("kis", 2,3,12)
bashundhara = Shopping("basundra", 'jamuna')
bashundhara.purchase('laptop', 10000, 20000)

        