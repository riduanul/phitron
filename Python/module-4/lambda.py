# lambda

# def doubled(x):
#     return x * 2

def doubled(num): return num * 2


# add = lambda x, y : x+y
def add(x, y): return x+y


array = [12, 22, 45, 656, 55, 5]
# double_items = map(doubled, array)
double_items = map(lambda x: x*3, array)


actors = [
    {'name': 'sabana', 'age': 35},
    {'name': 'alamgir', 'age': 76},
]

juniors = filter(lambda age: actors['age'] < 40, actors)
print(list(juniors))
