# print("Now I need money")
# input(100)

# money = input("Give me some money: ")
# print(money)
# by default the input from user will be string type:

first_money = input("kodom ali, Dosto kichu taka dey: ")
second_money = input("Peyara begum, dosto kichu taka dey: ")
print("Money i got from Kodom", first_money, "and from peyara", second_money)
total = int(first_money) + int(second_money)
print("total money i got: ", total)

"""

Google search

1. convert number to string : str
2. convert decimal number : float
3. python int vs float

"""

number = 12
strg = str(number)
print(type(strg))  # string

tax = 12.5
print(tax)
int_tax = int(tax)
print(int_tax)
flt = float(int_tax)
print(flt)
