# string is sequence of characters
# mutable (means changeable)
# immutable means can not change

name1 = 'sakib\'s khan'  # escape
name2 = "sakib khan"
name3 = """
sakib khan
number one
"""
# print(name1)
for char in name2:
    print()
    # print(char)

print(name2[1:4])

if 'khan' in name2:
    print('exist')
else:
    print('no')
