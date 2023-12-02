def fibo(n):
    if n == 0:
        return 0

    elif n == 1:
        return 1
    else:
        return fibo(n-1) + fibo(n-2)


test_cases = int(input())
for _ in range(test_cases):
    n = int(input())
    fibo_sequence = [fibo(i) for i in range(0, n)]

    print(fibo_sequence)
