# user_input = input("Enter three Numbers: ")
# input_list = user_input.split()
# numbers = [int(num) for num in input_list]
# max = 0
# sum = 0
# for num in numbers:
#     sum += num
#     if num > max:
#         max = num


# print("Max Number is: ", max)
# print("Sum of these numbers: ", sum)

# for odd in range(39, 68):
#     if odd % 2 != 0:
#         print(odd)

# Grading system!
number = input("Input your Marks: ")
marks = int(number)
if marks > 33:
    print("Congrats! You got pass mark!")
    if marks < 45:
        print("Your grade is: C")
    elif marks < 60:
        print("Your grade is: B")
    elif marks < 70:
        print("Your grade is: B+")
    elif marks < 80:
        print("Your grade is: A")
    elif marks < 100:
        print("Your grade is: A+")
else:
    print("Sorry! you failed!, Try again, Best of luck!")
