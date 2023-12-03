class Vehicle:
    def __init__(self, name, price, color) -> None:
        self.name = name
        self.price = price
        self.color = color
    def move(self):
        pass
    def __repr__(self) -> str:
      return f'{self.name} {self.price}'
class Bus(Vehicle):
    def __init__(self,seat, name, price, color) -> None:
        super().__init__(name, price, color)
        self.seat = seat
    def __repr__(self) -> str:
        return super().__repr__()
    
class Truck(Vehicle):
    def __init__(self,weight, name, price, color) -> None:
        super().__init__(name, price, color)
        self.weight = weight
    def __repr__(self) -> str:
        return super().__repr__()
    
class PickUpTruck(Truck):
    def __init__(self, weight, name, price, color) -> None:
        super().__init__(weight, name, price, color)
    def __repr__(self) -> str:
        return super().__repr__()

class ACBus(Bus):
    def __init__(self, seat, name, price, color, temperature) -> None:
        super().__init__(seat, name, price, color)
        self.temperature = temperature
        
    def __repr__(self) -> str:
        print(f'{self.seat}')
        return super().__repr__()


green_line = ACBus('green line', 5000000, 22, 'green', 12)
print(green_line)


    