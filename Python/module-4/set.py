# set: unique items collection & no duplicate value
# list: --> []
# tuple: --> ()
# set: --> {}

numbers = [12, 56, 89, 78, 12, 56, 98]
numbers_set = set(numbers)
print(numbers)
print(numbers_set)
numbers_set.add(55)
print(numbers_set)
print(numbers_set)
numbers_set.remove(56)
print(numbers_set)
# pop clear
for item in numbers_set:
    print(item)

if 56 in numbers_set:
    print('Exist')
A = {1, 3, 5, 7}
B = {1, 2, 3, 4, 5}
print(A & B)  # Intersection ^
print(A | B)  # A union B AUB
