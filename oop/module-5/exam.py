import random

class Exam:
    subject = 'English'
    def attend_to_exam(self, text):
        print('Best of luck')
    def __init__(self, name, marks):
        if marks > 79:
            print(f'Congrats! {name} You got in {self.subject}: {marks} Marks')
        elif marks > 50 :
            print(f'{name} You got in {self.subject}: {marks} Marks, Try to get More than {marks}')
        else:
            print(f"Sorry! {name} You failed. worked hard better luck next time")
sujon = Exam('Sujon', 80)
print(sujon)
sumon = Exam('Sumon', 30)
print(sumon)