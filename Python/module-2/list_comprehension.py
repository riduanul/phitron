# numbers = [45, 87, 65, 43, 85, 14, 26, 61]
# odd = []
# for num in numbers:
#     if num % 2 == 1 and num % 5 == 0:
#         odd.append(num)
# print(odd)
# odd_nums = [num for num in numbers if num % 2 == 1]
# print(odd_nums)

players = ['sakib', 'musfik', 'mustafiz']
ages = [38, 35, 32]
age_comb =[]
for player in players:
    # print('player: ', player)
    for age in ages:
        # print(player, age)
        age_comb.append([player, age])
# print(age_comb)
age_comb2 = [[player,age] for player in players for age in ages]
print(age_comb2)