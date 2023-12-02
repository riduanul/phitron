# Base class, parent class, common attribute + functionality class
# derived class,child class, uncommon attribute + functionality class


class Gadget:
    def __init__(self, brand, price, color, origin) -> None:
        self.brand = brand
        self.price = price
        self.color = color
        self.origin = origin
         
    def run(self):
       return f'running Phone : {self.brand}'

class Laptop:
    def __init__(self, memory, ssd):
      self.memory = memory
      self.ssd = ssd
    
    def coding(self):
        return f'Learning python and practicing'

class Phone(Gadget):
    def __init__(self, brand, price, origin,color, dual_sim) -> None:
        super().__init__(brand, price, origin, color)
        self.dual_sim = dual_sim
   
    def call(self, number, text):
        return f'sending {text} to {number}'
    
    def __repr__(self) -> str:
        return f'{self.dual_sim}'

class Camera:
    def __init__(self, pixel) -> None:
        self.pixel = pixel        
    
    def change_lens(self):
        pass

# inheritance

my_phone = Phone("Iphone", 120000,'china', 'silver',True)
print(my_phone.brand)
