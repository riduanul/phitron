N = int(input())
a = list(map(int, input().split()))
count = 0

while True:
    even = True
    for i in range(N):
        if a[i] % 2 != 0:
            even = False
            break

    if even == True:
        for i in range(N):
            a[i] //= 2
        count += 1
    else:
        break


print(count)
