# Operator Overloading:
# Operator overloading is a feature in object-oriented programming that allows you to define how operators behave for user-defined data types or classes. In other words, you can give a new meaning to existing operators by redefining their functionality for specific data types. This can make your code more intuitive and readable when working with custom objects.

# Example of Operator Overloading in Python:

# ```python
class ComplexNumber:
    def __init__(self, real, imag):
        self.real = real
        self.imag = imag

    def __add__(self, other):
        # Overloading the '+' operator
        real_sum = self.real + other.real
        imag_sum = self.imag + other.imag
        return ComplexNumber(real_sum, imag_sum)

    def __str__(self):
        return f"{self.real} + {self.imag}i"

# Create complex numbers
num1 = ComplexNumber(3, 2)
num2 = ComplexNumber(1, 7)

# Use the overloaded '+' operator
result = num1 + num2
print(result)  # Output: 4 + 9i


# In the example above, we define a `ComplexNumber` class and overload the `+` operator by implementing the `__add__` method. This allows us to add two complex numbers using the `+` operator, making the code more readable and intuitive.

# Method Overriding:
# Method overriding is a concept in object-oriented programming where a subclass provides a specific implementation of a method that is already defined in its superclass. This allows the subclass to provide its own version of the method, which is executed when the method is called on an instance of the subclass.

# Example of Method Overriding in Python:

# ```python
class Animal:
    def speak(self):
        pass

class Dog(Animal):
    def speak(self):
        return "Woof!"

class Cat(Animal):
    def speak(self):
        return "Meow!"

# Create instances of the subclasses
dog = Dog()
cat = Cat()

# Call the speak method on the instances
print(dog.speak())  # Output: Woof!
print(cat.speak())  # Output: Meow!


# In the example above, the `Animal` class defines a method `speak()`, which is overridden in the `Dog` and `Cat` subclasses with their own implementations. When you call the `speak()` method on an instance of `Dog`, it returns "Woof!", and when called on an instance of `Cat`, it returns "Meow!" This demonstrates method overriding, where the subclass provides its own version of a method defined in the superclass.