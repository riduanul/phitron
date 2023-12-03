class Student:
    def __init__(self, name,  currentClass, id,):
        self.name = name
        self.id = id
        self.currentClass = currentClass
    def __repr__(self) -> str:
        return f'Student with name {self.name}, class: {self.currentClass}, id: {self.id}'

class Teacher:
    def __init__(self, name, subject, id):
        self.name = name
        self.subject = subject
        self.id = id
        
    def __repr__(self) -> str:
        return f'Teacher: {self.name}, subject:{self.subject}'

class School:
    
    def __init__(self, name):
        self.name = name
        self.teachers = []
        self.students = []
    def add_teacher(self, name, subject):
        id = len(self.teachers) + 101
        teacher = Teacher(name, subject, id)
        self.teachers.append(teacher)
    
    def enroll(self, name, fee):
        if fee < 6500:
            return f'Not enough money'
        else:
            roll = len(self.students) + 1
            student = Student(name, 'C', roll)
            self.students.append(student)
            return f'{name} is enrolled with id : {roll}, extra money {fee - 6500}'    
    
    def __repr__(self):
        print('Welcome to', self.name)
        print('------Our Teachers--------')
        for teacher in self.teachers:
            print(teacher)
        print('------Our Students--------')
        for student in self.students:
            print(student)
        return 'All Done for Now'
        
phitron = School('Phitron')

phitron.enroll('alia', 5000)
phitron.enroll('rani', 6500)
phitron.enroll('aiswariya', 7000)
phitron.enroll('bhijaan', 70000)

phitron.add_teacher('Tom Cruise', 'Algo')
phitron.add_teacher('Decap', 'DS')
phitron.add_teacher('AJ', 'OOP')

print(phitron)
