class Pen:
    manufactured = 'Olympic'
    #constructor
    def __init__(self, brand, price, color):
        self.brand = brand
        self.price = price
        self.color = color
    def greetings(self):
        return 'Hello world!'

myPen = Pen('Matador', 5, 'blue')
print(myPen.brand, myPen.color, myPen.price)

herPen = Pen("Econo", 10, 'black')
print(herPen.brand, herPen.color, herPen.price)
        