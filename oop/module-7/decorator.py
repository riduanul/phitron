import math
def timer(fn):
    def inner(*args):
        print('time started')
        # print()
        fn(*args)
        print('time ended')
    return inner
# timer()()
@timer
def get_factorial(n):
    print('factorial starting')
    result = math.factorial(n)
    print(f'factorial of {n} is {result}')

get_factorial(2)
