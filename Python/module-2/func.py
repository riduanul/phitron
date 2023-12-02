"""
function
"""


def double_it(num):
    result = num * 2
    print(result)


double_it(5)

def sum(num1, num2):
    result = num1 + num2
    return result

res = sum(10, 20)
print(res)

#args
def all_sum(num1, num2, *numbers):
    print(numbers)
    sum=0
    for num in numbers:
        sum+= num
    return sum
    
result = all_sum(12,10,30, 70)
print(result)