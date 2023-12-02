# poly --> many(multiple)
# morph --> shape

class Animal:
    def __init__(self, name) -> None:
        self.name = name
    
    def make_sound(self):
        print("animal making some sound")


class cat(Animal):
    def __init__(self, name) -> None:
        super().__init__(name)

    def make_sound(self):
        print("meow meow")

class Dog(Animal):
    def __init__(self, name) -> None:
        super().__init__(name)

    def make_sound(self):
        print("Gheu gheu")

class Goat(Animal):
    def __init__(self, name) -> None:
        super().__init__(name)


       
       
       
        
don = cat('Real don')
don.make_sound()
shepard = Dog('Local Shephard')
shepard.make_sound()
mess = Goat("messi")
mess.make_sound()
less = Goat('Goragori khai')
less.make_sound()

animals = [don, shepard, mess, less]

for animal in animals:
    animal.make_sound()