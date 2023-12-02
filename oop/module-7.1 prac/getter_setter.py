# In object-oriented programming, getter and setter methods are used to control access to the attributes (variables) of a class. They are commonly used to enforce encapsulation and data hiding by providing a way to get and set the values of attributes while allowing for additional logic, validation, or security checks.

# 1. Getter Methods:
#    - Getter methods, also known as accessor methods, are used to retrieve the values of an object's attributes. They provide read-only access to the attributes, allowing you to access the values while encapsulating the actual data. Getter methods typically have names like `get_attribute()`.

# Example of a getter method in Python:

# ```python
# class Person:
#     def __init__(self, name, age):
#         self.__name = name  # Using double underscores to make the attribute private
#         self.__age = age

#     def get_name(self):
#         return self.__name

#     def get_age(self):
#         return self.__age

# # Create an instance of the Person class
# person = Person("Alice", 30)

# # Using getter methods to access attributes
# print(person.get_name())  # Output: "Alice"
# print(person.get_age())   # Output: 30
# ```

# In this example, the `get_name()` and `get_age()` methods provide read-only access to the private attributes `__name` and `__age`.

# 2. Setter Methods:
#    - Setter methods, also known as mutator methods, are used to modify the values of an object's attributes. They provide write access to the attributes, allowing you to set the values while encapsulating the actual data. Setter methods typically have names like `set_attribute(value)`.

# Example of a setter method in Python:

# ```python
# class Person:
#     def __init__(self, name, age):
#         self.__name = name
#         self.__age = age

#     def get_name(self):
#         return self.__name

#     def get_age(self):
#         return self.__age

#     def set_name(self, new_name):
#         self.__name = new_name

#     def set_age(self, new_age):
#         if new_age >= 0:
#             self.__age = new_age
#         else:
#             print("Age cannot be negative.")

# # Create an instance of the Person class
# person = Person("Alice", 30)

# # Using setter methods to modify attributes
# person.set_name("Bob")
# person.set_age(25)
# person.set_age(-5)  # This will print an error message

# print(person.get_name())  # Output: "Bob"
# print(person.get_age())   # Output: 25
# ```

# In this example, the `set_name()` and `set_age()` methods provide write access to the private attributes `__name` and `__age`, and the `set_age()` method includes a validation check to ensure the age is non-negative.

# By using getter and setter methods, you can control how attributes are accessed and modified, encapsulate data, and add validation or additional logic as needed.