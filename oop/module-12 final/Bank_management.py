import random 
from abc import ABC, abstractmethod 
from datetime import datetime,date 

class Bank:
    def __init__(self, name) -> None:
        self.name = name
        self.accounts = []
        self.balance = 0
        self.loan_amount= 500000
        self.loan_feature = True
        
    def add_account(self, account):
        self.accounts.append(account)
        self.balance += account.balance
    
    def loan(self, amount):
        self.loan_amount -= amount
    
    def __repr__(self) -> str:
        return f'{self.name} Bank has been started with {len(self.accounts)} accounts'

class Account(ABC):
    def __init__(self, name, email, password, address, type) -> None:
        self.name = name 
        self.email = email
        self.password = password
        self.address = address
        self.account_number = f'{self.name[:2]}{self.email[:2]}{random.randint(1000,9999)}'
        self.type = type
        self.balance = 0
        self.history ={}
        self.loan_limit = 2
        
    def deposit(self, amount):
        if amount > 0:
            self.balance += amount
            self.history[datetime.now()] = f'Deposit: {amount}'
            print(f'Deposited: {amount} balance : {self.balance}')
        else:
            print('invalid amount')
    def withdraw(self, amount):
        if amount > 0 and self.balance >= amount:
            self.balance -= amount        
            self.history[datetime.now()] = f'Withdraw: {amount}'
            print(f'withdraw: {amount} balance : {self.balance}')
        else:
            print('Withdrawal amount exceeded')
    
    
    def available_balance(self):
        print(f'Your Balance is: {self.balance}') 
    
    def transaction_history(self):   
        for key, value in self.history.items():
            print(f'{value} - {key}')
    
    def loan(self, bank, amount):
        if self.loan_limit > 0 :
            self.balance += amount
            bank.loan_amount -= amount
            self.loan_limit = self.loan_limit - 1
            print(f'Got loan: {amount} balance : {self.balance}')
        else: 
          print("Sorry Your loan limit exceed")
        

    def transfer_money(self, bank, account_no, amount):
        for account in bank.accounts:
            if account_no == account.account_number:
                if amount > 0 and self.balance > amount:
                    account.balance += amount
                    self.balance -= amount
                    print(f'Amount {amount} has been sent to {account_no}')
                else:
                    ('invalid amount or insufficient money')
            else:
                ("Invalid account")
    
    @abstractmethod
    def show_info(self):
        raise NotImplementedError
    
    
class SavingsAccount(Account, Bank):
    def __init__(self, name, email, password, address) -> None:
        super().__init__(name, email,password, address, 'savings')
        

    def show_info(self):
        print(f'Account Holder Name: {self.name} ')
        print(f'Account Holder Email: {self.email} ')
        print(f'Account Number: {self.account_number} ')
        print(f'Account Type: savings ')
        print(f'Account Balance: {self.balance} ')
        

class CurrentAccount(Account):
    def __init__(self, name, email, password, address) -> None:
        super().__init__(name, email, password, address, 'current')

    def show_info(self):
        print(f'Account Holder Name: {self.name} ')
        print(f'Account Holder Email: {self.email} ')
        print(f'Account Number: {self.account_number} ')
        print(f'Account Type: Current ')
        print(f'Account Balance: {self.balance} ')

class Admin(Account, Bank):
    def __init__(self, name, email, password, address) -> None:
        Account.__init__(self, name, email, password, address, 'admin')
        Bank.__init__(self, name)         
    
    
    def show_info(self):
        print(f'Account Holder Name: {self.name} ')
        print(f'Account Holder Email: {self.email} ')
        print(f'Account Type: Admin ')

    
    def delete_account(self, bank, account_no):
         for account in bank.accounts:   
            if account_no == account.account_number:
                bank.accounts.remove(account)
                print('account has been deleted')
            else:
                print("Invalid account no")
   
    def see_all_accounts(self, bank):
        print(f'Name: \t Account Number  -- Balance')
        for account in bank.accounts:
            print(f'{account.name} \t {account.account_number}  \t{account.balance}') 
    
    def see_balance_of_bank(self):
        print(f'Total Balance is: {self.balance}')
    
    def see_loan_amount(self):
        print(self.loan_amount)   
    
    def loan_feature_on_off(self, bank, switch):
        bank.loan_feature = switch
        print('Loan service has changed! ')
        
    
    
