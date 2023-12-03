from Menu import Pizza, Burger, Drinks, Menu
from Restaurant import Restaurant
from User import Chef, Customer, Server, Manager
from order import Order


def main():
    print('main as cpp')
    
#Pizza added
menu = Menu()
pizza_1 = Pizza('ShutkirPizza', 200, 'large', ['sutki', 'onion', 'oil'])
pizza_2 = Pizza('AlurPizza', 100, 'large', ['alu', 'holud' 'onion', 'oil'])
pizza_3 = Pizza('DalPizza', 500, 'large'  ,['dal', 'onion', 'oil'])

menu.add_menu_item('pizza', pizza_1 )
menu.add_menu_item('pizza', pizza_2 )
menu.add_menu_item('pizza', pizza_3 )

#Burger added
burger_1 = Burger('Naga Burger', 1000, 'chicken', ['bread', 'chili', 'chicken'])
burger_2 = Burger('Beef Burger', 1200, 'beef', ['bread', 'chili', 'beef'])

menu.add_menu_item('burger', burger_1)
menu.add_menu_item('burger', burger_2)

#Drinks added
coke = Drinks('coke', 50, True)
coffee = Drinks('Mocha coffee', 100, False)

menu.add_menu_item('drinks', coke)
menu.add_menu_item('drinks', coffee)

# Show menu
# menu.show_menu()

#Create Restaurant

restaurant = Restaurant('Patil Restaurant', 2000, menu)

manager = Manager('Kalachan', 112233, 'kala@chan.com', 'kaliyapur', 1500, 'jan 1 2020', 'core')
restaurant.add_employee('manager', manager)

chef = Chef('rustom baburchi', 222, 'rustom@kopa.com', 'rustom nagar', 3500, 'Feb 1 2020', 'chef', 'chinese')
restaurant.add_employee('chef', chef)

server = Server('chotu', 111, 'chotu@server.com', 'restaurant', 600, 'March 1 2020', 'server')
restaurant.add_employee('server', server)

# show Employees
# restaurant.show_employee()

#Customers

customer_1 = Customer('sakib khan', 22323, 'sakib@khan', 'bonani', 200000)
customer_2 = Customer('sakib al hasan', 323, 'sakib@hasan', 'bonani', 500000)
order_1 = Order(customer_1, [pizza_1, burger_1, coffee])

order_2 = Order(customer_1, [pizza_1, pizza_2, burger_2, burger_2, burger_1])

customer_1.place_order(order_1)
customer_2.place_order(order_2)

restaurant.add_order(order_1)
restaurant.add_order(order_2)


# customer_1 paying for order_1
restaurant.receive_payment(order_1.bill, order_1, customer_1)

print('revenue after first customer: ', restaurant.revenue, restaurant.balance)


restaurant.receive_payment(5000, order_2, customer_2)

print('revenue after second customer: ', restaurant.revenue, restaurant.balance)

#pay rent
restaurant.pay_expense(2000, 'restaurant_rent')
print('revenue after expense Rent: ', restaurant.revenue, restaurant.balance)

#pay salary
restaurant.pay_salary(server)
print('revenue after expense salary: ', restaurant.revenue, restaurant.balance)

#call the main 
if __name__ == '__main__':
    main()
    