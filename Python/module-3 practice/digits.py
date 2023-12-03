t = int(input())
for _ in range(t):
    n = int(input())
    n_numbers = str(n)
    reversed_digit = " ".join(n_numbers[:: -1])
    print(reversed_digit)
