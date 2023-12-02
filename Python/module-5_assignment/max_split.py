string = input()

l = 0
r = 0
ans = ''
strings = []
for str in string:
    if str == "L":
        l = l+1
    else:
        r = r+1

    ans += str

    if l == r:
        strings.append(ans)
        ans = ""

print(len(strings))
for str in strings:
    print(str)
