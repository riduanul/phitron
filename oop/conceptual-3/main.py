from abc import ABC, abstractmethod

class Ride_Sharing:
    def __init__(self, company_name) -> None:
        self.company_name: company_name
        self.drivers = []
        self.riders = []
        
        
    def add_rider(self, rider):
        self.riders.append(rider)
    
    def add_driver(self, driver):
        self.drivers.append(driver)
        
    def __repr__(self) -> str:
        return f"{self.company_name} has {len(self.__riders)} riders and {len(self.__drivers)} drivers."
    

class User(ABC):
    def __init__(self, name, email, nid, current_location) -> None:
        self.name = name
        self.email = email
        self.__nid = nid
        self.current_location = current_location

    @abstractmethod
    def display_profile(self):
        raise NotImplementedError

class Driver(User):
    def __init__(self, name, email, nid, license, current_location, wallet) -> None:
        super().__init__(name, email, nid, current_location)
        self.license = license
        self.__wallet = wallet
    
    def display_profile(self):
        print (f"Driver name is: {self.name} and email is: {self.email}")
    
    def accept_ride(self, ride):
        print(f' Uber Driver Mr.{self.name} accepted a ride request from Mr. {ride.rider} to ride {ride.start_location} to {ride.end_location}')

class Rider(User):
    def __init__(self, name, email, nid, current_location,  wallet) -> None:
        super().__init__(name, email, nid, current_location)
        self.__wallet = wallet
        self.current_ride = None
            
    def display_profile(self):
        print(f"Rider Name is: {self.name} and email is: {self.email}")
    
    def show_current_location(self):
        pass
    
    def ride_request(self, ride_sharing, destination):
        if not self.current_ride:
            request_ride = Ride_Request(self.name, self.current_location, destination)
            ride_match = Ride_Matching(ride_sharing.drivers)
            ride = ride_match.has_driver(request_ride)
            self.current_ride = ride
            
            
                    
    

class Ride:
    def __init__(self,rider, start_location, end_location, ) -> None:
        self.start_location = start_location
        self.end_location = end_location
        self.driver = None
        self.rider = rider
        
    def start_ride(self):
        pass
    
    def end_ride(self):
        pass

    def __repr__(self) -> str:
        return f"Start from {self.start_location} to {self.end_location}"

class Ride_Request:
    def __init__(self, rider, current_location, destination) -> None:
        self.rider = rider
        self.current_location = current_location
        self.destination = destination


class Ride_Matching:
    def __init__(self, drivers) -> None:
        self.drivers = drivers
    
    def has_driver(self, request_ride):
        if len(self.drivers) >0:
            ride = Ride(request_ride.name, request_ride.current_location, request_ride.destination)
            driver = self.drivers[0]
            driver.accept_ride(ride)
            return ride
        else:
            return f'Driver not available !'
            
uber = Ride_Sharing('Uber')

driver1 = Driver('Alice', 'alice@gamail.com', 12345, 'xyz12', 'chittagong', 50 )
rider1 = Rider('Sakib', 'sakib@gmail.com', 1236, 'ctg2', 500)

uber.add_driver(driver1)
uber.add_rider(rider1)

rider1.ride_request(uber, 'dhaka')