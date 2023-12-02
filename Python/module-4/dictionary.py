numbers = [12, 56, 98, 78, 56, 12, 26, 98]
person1 = ['kalachan', 'kalipur', '23', 'student']
person2 = ['dholachan', 'kalipur', '24', 'student']
# enumerates
for i, num in enumerate(numbers):
    print(i, num)

# Dictionary is key value pair
person = {'name': 'kala chan',
          'address': "kaliapur", 'age': 23, 'job': 'facebooker'}

print(person['job'])
print(person.keys())
print(person.values())
person['language'] = 'python'
print(person['language'])
del person['age']
print(person)

# special dictionary looping
for k, v in person.items():
    print(k, v)
