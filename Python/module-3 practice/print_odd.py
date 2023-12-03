test_cases = int(input())
for _ in range(test_cases):
    x = int(input())
    y = int(input())
    sum_odd = 0
    for num in range(x+1, y):
        if num % 2 != 0:
            sum_odd += num
    print(sum_odd)
