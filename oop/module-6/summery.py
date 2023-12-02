class Book:
    def __init__(self, name) -> None:
        self.name = name

    def read(self):
        raise NotImplementedError

class Physics(Book):
    def __init__(self, name, lab) -> None:
        super().__init__(name)
        self.lab = lab
    
    def read(self):
        print("reading physics vector chaper")
        
        
topon = Physics('topon', True)
print(issubclass(Physics, Book))
print(isinstance(topon, Physics))
print(isinstance(topon, Book))
topon.read()