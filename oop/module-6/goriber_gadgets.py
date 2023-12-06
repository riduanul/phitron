class Laptop:
    def __init__(self, brand, price, color, memory):
        self.brand = brand
        self.price = price
        self.color = color
        self.memory = memory
   
    def run(self):
       return f'running laptop : {self.brand}'
    
    def coding(self):
        return f'Learning python and practicing'

class Phone:
    def __init__(self, brand, price, color, dual_sim) -> None:
        self.brand = brand
        self.price = price
        self.color = color
        self.dual_sim = dual_sim
        
    def run(self):
       return f'running Phone : {self.brand}'
    
    def call(self, number, text):
        return f'sending {text} to {number}'

class Camera:
    def __init__(self, brand, price, color, pixel) -> None:
        self.brand = brand
        self.price = price
        self.color = color
        self.pixel = pixel        
    def run(self):
       return f'running Phone : {self.brand}'
    
    def change_lens(self):
        pass