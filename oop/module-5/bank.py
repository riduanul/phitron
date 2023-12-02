class Bank:
    def __init__(self, balance):
        self.balance = balance
        self.min_withdraw = 100
        self.max_withdraw = 100000
        
    def get_balance(self):
        print(f'Your balance is: {self.balance}')
    
    def deposit(self, amount):
        if amount > 0:
            self.balance += amount
    
    def withdraw(self, amount):
        if amount <self.min_withdraw:
            print( f'Fokira you can not withdraw below {self.min_withdraw}')
        elif amount > self.max_withdraw:
            print( f'bank fokir hoye jabe. you can not withdraw more than { self.max_withdraw}')
        else:
            self.balance -= amount
            print (f'Here is your money {amount}')
            print(f'After withdraw your balance : {self.get_balance()}')


rizwan = Bank(200)
print(rizwan.balance)
rizwan.deposit(100000)
print(rizwan.balance)
rizwan.withdraw(10000)

dbbl = Bank(5000)
dbbl.deposit(2000)
dbbl.deposit(2000)
print(dbbl.get_balance())
