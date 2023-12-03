# Encapsulation --> hide details
# access modifier: Public, protected, private

class Bank:
    def __init__(self, holder_name, initial_deposit) -> None:
        self.holder_name = holder_name #Public
        self.__balance = initial_deposit #Private
        self._branch = 'Bonani 11' #protected
    def deposit(self, amount):
        self.__balance += amount
    
    def get_balance(self):
        return self.__balance
    
    def withdraw(self, amount):
        if amount < self.__balance :
            self.__balance = self.__balance - amount
            return amount
        else:
            return f'fokira taka nai'
    
    
rafsun = Bank('Chooto Bro', 10000)
print(rafsun.holder_name)
rafsun.deposit(40000)
print(rafsun.get_balance())
print(rafsun._branch)
print(rafsun._Bank__balance)