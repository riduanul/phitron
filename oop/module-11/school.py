class School:
    def __init__(self, name, address) -> None:
        self.name = name
        self.address = address
        self.teachers =[]
        
        #composition
        self.classrooms = {}
        
    
    def add_classroom(self, classroom):
        self.classrooms[classroom.name] = classroom
         
    def student_admission(self, student):
        classroom = student.classroom.name
        if classroom in self.classrooms:
            # Todo: set student id, (roll num) at the time of adding the student
            self.classrooms[classroom].add_student(student)
        else:
            print('No classroom as named {class_name}')    
    
    
    @staticmethod
    def calculate_grade(marks):
        if 80<= marks <= 100:
            return 'A+'
        elif 70 <= marks < 80:
            return 'A'
        elif 60 <= marks < 70:
            return 'A-'
        elif 50 <= marks < 60:
            return 'B'
        elif 40 <= marks < 50:
            return 'C'
        elif 33 <= marks < 40:
            return 'D'
        else: 
            return 'F'
    
    @staticmethod
    def grade_to_value(grade):
        grade_map = {
            'A+' : 5.00,
            'A' : 4.00,
            'A-' : 3.50,
            'B' : 3.00,
            'C' : 2.00,
            'D' : 1.00,
            'F' : 0.00,
        }
        return grade_map[grade]

    @staticmethod
    def value_to_grade(value):
       if 4.5 <= value <=5.00:
           return 'A+'
       elif 3.5 <= value <= 4.5:
           return 'A'
       elif 3.0 <= value <= 3.5:
           return 'A-'
       elif 2.50 <= value <= 3.00:
           return 'B'
       elif 2.0 <= value <= 2.50:
            return 'C'
       elif 1.00 <= value <= 2.00:
           return 'D'
       else: 
           return 'F'
              
    def add_teacher(self, teacher):
        subject = teacher.subject
        if subject in self.teachers:
            self.teachers[subject] = teacher
  
    def __repr__(self) -> str:
        print('----------All ClassRooms-------------')
        for key, value in self.classrooms.items():
            print(key) 
        
        print('------Students--------')
        eight = self.classrooms['eight']
        for student in eight.students:
            print(f'{student.name} class: {student.classroom.name}') 
    
        print('------Subjects--------')
        for subject in eight.subjects:
            print(f'{subject.name}: {subject.teacher}') 
       
        print('------Student exam marks--------')
        for student in eight.students:
            for key, value in student.marks.items():
                print(f' Name: {student.name}: {key} : {value} : {student.subject_grade[key]}') 
       
        
        
        return ""          
    
class ClassRoom:
    def __init__(self, name) -> None:
        self.name = name
        #composition
        self.students = []
        self.subjects = []

    def add_student(self, student):
        serial_id = f'{self.name} -{len(self.students) + 1}'
        student.id = serial_id
        self.students.append(student)
    
    def add_subject(self, subject):
        self.subjects.append(subject)
        
    def take_semester_final(self):
        #take exam
        for subject in self.subjects:
            subject.exam(self.students)

        #calculate final grade
        for student in self.students:
            student.calculate_final_grade()
    
    
    def __str__(self) -> str:
        return f'{self.name} has {len(self.students)} students'
    
    #Todo: sort students by grade
    def get_top_student(self):
        pass


class Subject:
    def __init__(self, name, teacher) -> None:
        self.name = name
        self.teacher = teacher
        self.max_marks = 100
        self.pass_marks = 33
    
  
    def exam(self, students):
        for student in students:
            mark = self.teacher.evaluate_exam()
            student.marks[self.name] = mark
            student.subject_grade[self.name] = School.calculate_grade(mark)

    
    