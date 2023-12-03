import copy
# # list, array, collection is same
# # index =  0   1   2   3   4   5   6   7   8   9  
# numbers = [45, 56, 12, 89, 87, 32, 89, 59, 46, 93]
# # p index= -10 -9  -8  -7  -6  -5  -4  -3  -2  -1

# print(numbers[3], numbers[-3])

# #list (start: end) # start from the start index and stops before the end index
# print(numbers[2:7])

# # list(start: end: step)
# print(numbers[2:7:1])
# print(numbers[2:7:2])
# print(numbers[7:2:-1])
# print(numbers[4:])
# print(numbers[:4])
# print(numbers[:]) #shortcut to copy a list
# print(numbers[::-1]) #shortcut to reverse a list

numbers1 = [11,2,32,4,50]
numbers1.append(100) #insert in last position
numbers2 = copy.copy(numbers1) # copy list
numbers3 = copy.deepcopy(numbers1) #copy list deeply 
numbers1.pop() #remove from last
numbers1.insert(3, 200) #insert in any position
numbers1.remove(2) #remove any value
if 5 in numbers1:
    index = numbers1.index(5)
    print(index)
numbers1.sort() #sort list
numbers1.reverse() #reverse list
print("Numbers1 ID: ", id(numbers1), "value: ", numbers1)
print("Numbers2 ID: ", id(numbers2), "value: ", numbers2)
print("Numbers3 ID: ", id(numbers3), "value: ", numbers3)

