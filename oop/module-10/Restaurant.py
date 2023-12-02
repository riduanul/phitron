class Restaurant:
    def __init__(self, name, rent, menu = []) -> None:
        self.name = name
        self.rent = rent
        self.orders = []
        self.chef = None
        self.server = None
        self.manager = None
        self.menu = menu
        self.revenue = 0
        self.expense = 0
        self.balance = self.revenue - self.expense
        self.profit = 0
    
    def add_employee(self,type, employee):
        if type == 'chef':
            self.chef = employee
        elif type == 'server':
            self.server = employee
        elif type == 'manager':
            self.manager = employee
    
    
    def receive_payment(self, amount, order, customer):
        if order.bill <= amount:
            self.revenue += order.bill
            self.balance += order.bill
            customer.due_amount = 0
            return amount - order.bill
        else:
            print('Not Enough money. pay More')
    
    def pay_expense(self, amount, description):
        if amount < self.balance:
            self.expense += amount 
            self.balance -= amount
            print(f'Expense {amount} for {description}')
        else: 
            print(f'Not enough money to pay {amount}')
    
    def pay_salary(self, employee):
        print(f'Paying salary for {employee.name} salary: {employee.salary}')
        if employee.salary < self.balance:
            self.balance -= employee.salary
            self.expense += employee.salary
            employee.receive_salary()
        else:
            print('Not enough money to pay salary')
    
    def show_employee(self):
        print("------SHOWING EMPLOYEES-------")
        if self.manager is not None:
            print(f'Manager: {self.manager.name} with salary {self.manager.salary}')
        if self.chef is not None:
            print(f'Chef: {self.chef.name} with salary {self.chef.salary}')
        if self.server is not None:
            print(f'Server: {self.server.name} with salary {self.server.salary}')
    
    def add_order(self, order):
        self.orders.append(order)
    
    
        