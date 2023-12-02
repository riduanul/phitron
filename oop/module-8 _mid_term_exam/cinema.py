class Star_Cinema:
    hall_list =[]

    def entry_hall(self, hall):
        self.hall_list.append(hall)

class Hall(Star_Cinema):
    
    def __init__(self, rows, cols, hall_no) -> None:
        super().__init__()
        self._seats = {}
        self.show_list = ()
        self._rows = rows
        self._cols = cols
        self.hall_no = hall_no
        
    def seats(self):
        #with lambada function initialize with 0
        seats = [[0 for _ in range(self._cols)] for _ in range(self._rows)]
       
             
    def entry_show(self, id, movie_name, time):
                    
            show = (id, movie_name, time)
            self.show_list += self.show_list + (show, )
            self._seats[id] = [[0 for _ in range(self._cols)] for _ in range(self._rows)]
    
    def book_seats(self, show_id, seat):
        if show_id not in self._seats:
            print('Wrong show Id')
        else:
            row, col = seat
            if 1 <= row <= self._rows and 1 <= col <= self._cols:
                if self._seats[show_id][row - 1][col - 1] == 0:
                    self._seats[show_id][row - 1][col - 1] = 1
                    print(f"Seat ({row}, {col}) Booked for You!")
                else:
                    print("The seat you want is already booked.")
            else:
                print('Invalid seat!')
            
    
    def view_show_list(self):
        print()
        print(".....................................")   
        print(f"ID \t - Movie \t - Time")   
        for show in self.show_list:
            print(f"{show[0]} \t - {show[1]} \t - {show[2]}")   
        
        print(".....................................")   
        print()

    
    def view_available_seats(self, show_id):
        if show_id not in self._seats:
            print('Wrong show Id')
        print("........................")
        for row in self._seats[show_id]:
            for col in row:
               print(col, end=' ')
            print()
        
        print("........................")
        
        
        
hall_1 = Hall(7, 7, 101)

hall_1.entry_show(111, 'jawan', '10:00 AM')
hall_1.entry_show(222, 'jawan2', '2:00 PM')

cine_plex = Star_Cinema()

cine_plex.entry_hall(hall_1)

while True:
    print('1. VIEW ALL SHOW TODAY')
    print('2. VIEW AVAILABLE SEATS')
    print('3. BOOK TICKET')
    print('4. EXIT')
    
    op = int(input("Enter Option: "))
    
    if op == 1:
        hall_1.view_show_list()
    
    elif op == 2:
        show_id = int(input("show_id: "))
        hall_1.view_available_seats(show_id)
    
    elif op == 3:
        show_id = int(input("show id: "))
        row, col = map(int, input('Input row and col: ').split())
        
        hall_1.book_seats(show_id, (row, col))
    
    elif op == 4:
        break

    