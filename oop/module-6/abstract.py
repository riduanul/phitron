#Abstract base class
from abc import ABC, abstractmethod

class Animal(ABC):
    @abstractmethod # Enforce all derived class to create its methods
    def eat(self):
        print("I need Food!")
    
    @abstractmethod
    def move(self):
        pass

class Monkey(Animal):
    def __init__(self, name) -> None:
        self.name = 'Monkey'
        super().__init__()
    def eat(self):
        print("Hey nana! i am eating banana")
    def move(self):
        print("hanging on the branches")

layka = Monkey("Banor")
print(layka.eat())
