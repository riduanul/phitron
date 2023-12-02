class Person:
    def __init__(self, name, age, height, weight) -> None:
        self.name = name
        self.age = age
        self.height = height
        self.weight = weight

    def eat(self):
        print("vat mangso polau korma")
    def exercise(self):
        raise NotImplementedError
    
class Cricketer(Person):
    def __init__(self, name, age, height, weight, team) -> None:
        super().__init__(name, age, height, weight)
        self.team = team 
    #Override
    def eat(self):
        print(f"vegetables")  
    
    def exercise(self):
        print("must be done") 
    
    def __add__(self, other):
        return self.age + other.age


sakib = Cricketer('sakib', 38, 68, 91, 'BD')
mushi = Cricketer('mushi', 36, 65, 81, 'BD')

sakib.eat()
sakib.exercise()

print(sakib + mushi)
    