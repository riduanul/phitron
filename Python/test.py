# print reverse

# t = int(input())

# for i in range(t):
#     x = list(input())
#     x.reverse()
#     result = " ".join(x)
#     print(result)

# is palindrome
# def isPalindrome(arr):
#     if arr == arr[::-1]:
#         return "YES"

#     return "NO"

# N = int(input())
# lst = list(map(int, input().split()))

# # Check if the list is a palindrome
# reversed_lst = lst[::-1]

# if lst == reversed_lst:
#     print("YES")
# else:
#     print("NO")

N, Q = map(int, input().split())

A = list(map(int, input().split()))

for _ in range(Q):
    L, R = map(int, input().split())
    q_sum = sum(A[L-1:R])
    print(q_sum)
