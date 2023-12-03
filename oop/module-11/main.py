from school import School, ClassRoom, Subject
from persons import Student, Teacher

def main():
    print('main is running')

#school
school = School('Adam jee', 'uttara')


#class rooms
eight = ClassRoom('eight')
school.add_classroom(eight)
nine = ClassRoom('nine')
school.add_classroom(nine)
ten = ClassRoom('ten')
school.add_classroom(ten)

#student
alim = Student('Abir Khan', eight)
school.student_admission(alim)
babul = Student('babul Khan', eight)
school.student_admission(babul)
ratul = Student('ratul Khan', eight)
school.student_admission(ratul)

#Teacher
physics_teacher = Teacher('Abdul Karim')
chemistry_teacher = Teacher('Haradhon')
biology_teacher = Teacher('ajmol')

#subject
physics = Subject('physics', physics_teacher)
eight.add_subject(physics)
chemistry = Subject('chemistry', chemistry_teacher)
eight.add_subject(chemistry)
biology = Subject('biology', biology_teacher)
eight.add_subject(biology)

#exam
eight.take_semester_final()


print(school)

if __name__ == '__main___':
    main()