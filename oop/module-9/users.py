from abc import ABC, abstractmethod
from datetime import datetime

class Ride_Sharing:
    def __init__(self, company_name) -> None:
        self.company_name = company_name
        self.riders = []
        self.drivers = []
        self.rides = []
        
    def add_rider(self, rider):
        self.riders.append(rider)
    
    def add_driver(self, driver):
        self.drivers.append(driver)
    
    def __repr__(self) -> str:
       
        return f'{self.company_name} with riders: {len(self.riders)} and drivers: {len(self.drivers)}'

class User(ABC):
    def __init__(self, name, email, nid) -> None:
        self.name = name
        self.email = email
        # TODO: set User Id dynamically
        self.__id = 0
        self.__nid= nid
        self.wallet = 0
    
    @abstractmethod
    def display_profile(self):
        raise NotImplementedError

class Rider(User):
    def __init__(self, name, email, nid, current_loc, initial_amount) -> None:
        super().__init__(name, email, nid)
        self.current_ride = None
        self.wallet = initial_amount
        self.current_loc = current_loc
    
    def display_profile(self):
        print(f'Rider name: {self.name} email: {self.email}')
    
    def update_location(self, current_location):
        self.current_location = current_location
    
    def load_cash(self, amount):
        if amount > 0:
            self.wallet += amount
    
    def request_ride(self, ride_sharing, current_location, destination):
        if not self.current_ride:
            ride_request = Ride_Request(self, current_location, destination)
            ride_matcher = Ride_Matching(ride_sharing.drivers)
            ride = ride_matcher.find_driver(ride_request)
            self.current_ride = ride
    
    def show_current_ride(self):
        print(self.current_ride)

class Driver(User):
    def __init__(self, name, email, nid, current_location) -> None:
        super().__init__(name, email, nid)
        self.current_location = current_location
        self.wallet = 0
        

    def display_profile(self):
         print(f'Driver name: {self.name} email: {self.email}')
    
    def accept_ride(self, ride):
        ride.set_driver(self)


class Ride:
    def __init__(self, start_loc, end_loc) -> None:
        self.start_loc = start_loc
        self.end_loc = end_loc
        self.driver = None
        self.rider = None
        self.set_time = None
        self.end_time = None
        self.estimated_fare = None
    
    def set_driver(self, driver):
        self.driver = driver
    
    def start_ride(self):
        self.start_time = datetime.now()
        
    def end_ride(self, amount, rider):
        self.end_time = datetime.now()
        self.rider.wallet -= self.estimated_fare
        self.driver.wallet += self.estimated_fare
    
    def __repr__(self) -> str:
        return f'Ride Details: Started: {self.start_loc} to {self.end_loc}'
    
class Ride_Request:
    def __init__(self, rider, current_location, end_location) -> None:
        
                self.rider = rider
                self.current_location = current_location
                self.end_location = end_location

class Ride_Matching:
    def __init__(self, drivers) -> None:
        self.available_drivers = drivers
        
    def find_driver(self, ride_request):
        if len(self.available_drivers) > 0:
            #TODO: find the closest driver of the rider
            print('looking for a driver')
            driver = self.available_drivers[0]
            ride = Ride(ride_request.rider.current_loc, ride_request.end_location )
            
            driver.accept_ride(ride)
            return ride        
        
class Vehicle(ABC):
    speed = {
        'car' : 50,
        'bike': 60,
        'cng': 15
    }
    def __init__(self, vehicle_type, license_plate, rate) -> None:
        self.vehicle_type = vehicle_type
        self.license_plate = license_plate
        self.rate = rate
        self.status = 'available'
        
    @abstractmethod
    def start_drive(self):
        pass

class car(Vehicle):
    def __init__(self, vehicle_type, license_plate, rate) -> None:
        super().__init__(vehicle_type, license_plate, rate)
        
    def start_drive(self):
        self.status = 'unavailable'

class bike(Vehicle):
    def __init__(self, vehicle_type, license_plate, rate) -> None:
        super().__init__(vehicle_type, license_plate, rate)
        
    def start_drive(self):
        self.status = 'unavailable'
        

# check the class integration

niye_jao = Ride_Sharing("Niye Jao")

#create Rider
sakib = Rider('sakib khan', 'sakib@khan.com', 234234, 'mohakhali', 1200)


# Add rider in your company
niye_jao.add_rider(sakib)


## create driver
kalapakhi = Driver('kalapakhi', 'kalab@pakhi.com', 222222, 'gulshan1')

## Add driver
niye_jao.add_driver(kalapakhi)

print(niye_jao)

sakib.request_ride(niye_jao,'Uttora')
sakib.show_current_ride()