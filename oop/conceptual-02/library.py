class Book:
    def __init__(self, id, name, author, quantity) -> None:
        self.id = id
        self.name = name
        self.author = author
        self.quantity = quantity
    

class User:
    def __init__(self, id, name, password) -> None:
        self.id = id
        self.name = name
        self.password = password
        self.role = 'User'
        self.borrowedBooks = []
        self.returnBooks = []

class Library:
    def __init__(self, name) -> None:
        self.name = name
        self.users = []
        self.books = []
    
    def add_book(self, id, name, author, quantity):
        book = Book(id, name, author, quantity)
        self.books.append(book)
        print(f"Your book {name} is successfully added to the library! ")
    
    def add_user(self, id, name, password):
        user = User(id, name, password)
        self.users.append(user)
        return user
    
    def borrowBook(self, user, token):
        for book in self.books:
            if book.name == token:
                if book in user.borrowedBooks:
                    print('Already borrowed ! \n')
                    return
                elif book.quantity == 0:
                    print("Sorry No copy available! \n")
                else:
                    user.borrowedBooks.append(book)
                    book.quantity -= 1
                    print("Here Your Book! ")
                    return
                    
            else: 
                print(f"Not found any book with name {token}")
    
    def returnBook(self, user, token): 
        for book in self.books:
            if book.name == token:
                if book in user.borrowedBooks:
                    book.quantity += 1
                    user.returnBooks.append(book)
                    user.borrowedBooks.remove(book)
                    print("Returned book successfully !")
                    return
            else:
                print(f"You did not borrowed book {book}")
                 

bsk = Library("Bishwa Shahitto Kendro")

admin = bsk.add_user(101, 'admin', 'admin')
user = bsk.add_user(102, 'Munna',  "123")

fullStackDevelopment = bsk.add_book(101, 'fullstack', 'nayem', 5)
fullStackDevelopment = bsk.add_book(102, 'python', 'subeen', 12)
fullStackDevelopment = bsk.add_book(102, 'cp', 'subeen', 18)

currentUser = None

while True:
   if currentUser == None:
       print("No logged in user")
       
       option = input("Login or Register: (L/R)")
       
       if option == 'L':
           id = int(input("Enter Id:"))
           password = input("Enter Password:")
           
           match = False
           for user in bsk.users:
               if user.id == id and user.password == password:
                   currentUser = user
                   print("Successfully logged in!")
                   match=True
                   break
               if match == False:
                   print("No user found!")
       elif option == 'R':
            id = int(input("Enter Id: "))
            name = input('Enter Name: ')
            password = input('Enter Password: ')
            
            for user in bsk.users:
                if user.id == id:
                    print('User Id Already exist!')
                elif user.name == name:
                    print('User Name Already exist!')
                
            newUser = bsk.add_user(id, name, password) 
            currentUser = newUser
            print("Successfully Logged in!")   
   else:
       print(f"Welcome {currentUser.name} ! ")
       if currentUser.name == 'admin':
           
           print("Options: ")
           print("1: Add Book")
           print("2: Add User")
           print("3: Show All Books")
           print("4: Logout")
           
           ch = int(input("Enter option: "))
           
           if ch == 1:
               id = int(input("Enter Book Id:"))
               name = input("Enter Book Name:")
               author = input("Enter Author Name:")
               quantity = input("Enter Quantity:")
               
               bsk.add_book(id, name, author, quantity)
               print(f"Your book {name} successfully added to the library")
            
           elif ch == 2:
                id = int(input("Enter Book Id:"))
                name = input("Enter Book Name:")
                password = input("Enter Password:")
                
                bsk.add_user(id, name, password)
                print("New User {name} has been successfully added to the user list !")
        
           elif ch == 3:
              
               for book in bsk.books:
                   print(f"Book id -  Book Name - Author- Quantity")
                   print(f"{book.id} \t {book.name} \t {book.author} \t {book.quantity}")
                   print()
           
           elif ch == 4:
               currentUser = None
       else: 
            print('Options: \n')
            print('1: Borrow Book')
            print('2: Return Book')
            print('3: Show Borrowed Book')
            print('4: Show History')
            print('5: Logout')
            
            ch= int(input("Enter Option: "))
            
            if ch == 1:
                name = input("Enter Book Name:")
                bsk.borrowBook(currentUser, name)
                
            elif ch == 2:
                name = input("Enter Book Name:")
                bsk.returnBook(currentUser, name)
            
            elif ch == 3:
                print("Borrowed Books: \n")
                for book in currentUser.borrowedBooks:
                   print(f"Book id -  Book Name - Quantity")
                   print(f"{book.id} \t {book.name} \t {book.quantity}")
                   print()
            
            elif ch == 4:
                print("History: \n")
                for book in currentUser.returnBooks:
                   print(f"Book id -  Book Name - Quantity")
                   print(f"{book.id} \t \t {book.name} \t 1")
                   print()
                   
            elif ch == 5:
                currentUser = None