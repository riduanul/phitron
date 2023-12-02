class User:
    def __init__(self, name, age, money) -> None:
        self._name = name
        self._age = age
        self.__money = money
    
    # getter without any setter is readonly attribute
    def age(self):
        return self._age
    
    #getter
    @property
    def salary(self):
        return self.__money

    @salary.setter
    def salary(self, value):
        if value < 0:
            print("salary can not be negative")
        self.__money += value
        
        
samsu = User('samsu', 21, 12000)
# print(samsu__money)
print(samsu.age())
print(samsu.salary)
samsu.salary = 4500
print(samsu.salary)