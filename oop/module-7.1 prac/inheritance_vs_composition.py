# Inheritance and composition are two fundamental concepts in object-oriented programming used to establish relationships between classes. They are used to achieve code reuse and create more maintainable and flexible code. Here, I'll explain the differences between inheritance and composition with proper examples.

# **Inheritance:**

# Inheritance is an "is-a" relationship where a new class (subclass or derived class) is created by inheriting properties and behaviors from an existing class (base class or superclass). The subclass can extend or override the characteristics of the superclass, allowing you to build on existing functionality.

# Example of Inheritance in Python:

# ```python
# class Animal:
#     def __init__(self, name):
#         self.name = name

#     def speak(self):
#         pass

# class Dog(Animal):
#     def speak(self):
#         return f"{self.name} says Woof!"

# class Cat(Animal):
#     def speak(self):
#         return f"{self.name} says Meow!"

# # Creating instances of subclasses
# dog = Dog("Buddy")
# cat = Cat("Whiskers")

# print(dog.speak())  # Output: "Buddy says Woof!"
# print(cat.speak())  # Output: "Whiskers says Meow!"
# ```

# In this example, `Dog` and `Cat` are subclasses of the `Animal` superclass, inheriting the `name` attribute and overriding the `speak()` method to provide their specific behavior.

# **Composition:**

# Composition is a "has-a" relationship where a class is composed of one or more other classes as components or parts. It involves creating instances of other classes within a class to build more complex objects. Composition allows for greater flexibility and reusability because you can change or swap components without affecting the containing class.

# Example of Composition in Python:

# ```python
# class Engine:
#     def start(self):
#         print("Engine started")

# class Car:
#     def __init__(self):
#         self.engine = Engine()  # Composition: Car has an Engine

#     def drive(self):
#         print("Car is moving")

# # Creating an instance of the Car class
# my_car = Car()

# # Using the Car's components through composition
# my_car.engine.start()
# my_car.drive()
# ```

# In this example, the `Car` class is composed of an `Engine` class, meaning it contains an instance of the `Engine` class. Through composition, the `Car` class can use the functionality of the `Engine` class without inheriting from it.

# **Key Differences:**

# 1. **Relationship Type:**
#    - Inheritance is an "is-a" relationship, signifying an "inheritance" of attributes and behaviors.
#    - Composition is a "has-a" relationship, indicating that one class "has" or contains another as a part.

# 2. **Code Reusability:**
#    - Inheritance promotes code reuse by inheriting properties and behaviors from a superclass.
#    - Composition promotes code reuse by creating objects from other classes, making it easier to replace or modify components.

# 3. **Flexibility:**
#    - Inheritance can be less flexible because it creates a strong connection between the subclass and superclass.
#    - Composition is more flexible as it allows you to change or switch components without affecting the containing class.

# Both inheritance and composition have their use cases, and the choice between them depends on the specific requirements of your application and your design goals.