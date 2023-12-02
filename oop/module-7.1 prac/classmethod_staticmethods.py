# Class methods and static methods are both types of methods in Python that are associated with a class rather than an instance of the class. However, they serve different purposes and have distinct characteristics. Here are four key differences between class methods and static methods, along with examples for each:

# 1. Access to Class Attributes:
#    - Class Method: Class methods have access to and can modify class-level attributes. They can also access the class itself through the `cls` parameter.
#    - Static Method: Static methods do not have access to class attributes, nor can they modify them. They are essentially just like regular functions within a class.

# Example of a class method:


class MyClass:
    class_attr = 0

    @classmethod
    def increment_class_attr(cls):
        cls.class_attr += 1

MyClass.increment_class_attr()  # Modifies the class attribute
print(MyClass.class_attr)  # Output: 1


# Example of a static method:


class MyClass:
    class_attr = 0

    @staticmethod
    def static_method():
        print("This is a static method")

MyClass.static_method()  # Can't access or modify class_attr


# 2. Access to Instance Attributes:
#    - Class Method: Class methods can access instance attributes but cannot modify them directly. They need to receive an instance as a parameter.
#    - Static Method: Static methods cannot access or modify instance attributes since they don't receive `self` as a parameter.

# Example of using class method with instance attributes:


class MyClass:
    def __init__(self, value):
        self.value = value

    @classmethod
    def modify_instance(cls, instance, new_value):
        instance.value = new_value

obj = MyClass(42)
MyClass.modify_instance(obj, 100)  # Modifies the instance attribute
print(obj.value)  # Output: 100


# 3. Decorator Usage:
#    - Class Method: Class methods are decorated with `@classmethod`.
#    - Static Method: Static methods are decorated with `@staticmethod`.

# 4. Parameters:
#    - Class Method: Class methods take a mandatory first parameter conventionally named `cls`, which refers to the class itself. This allows access to class-level attributes and methods.
#    - Static Method: Static methods do not require any specific parameters representing the class or instance. They are just like regular functions.

# Example of class method:


class MyClass:
    class_attr = 0

    @classmethod
    def class_method(cls):
        cls.class_attr += 1

MyClass.class_method()
print(MyClass.class_attr)  # Output: 1

# Example of static method:

class MyClass:
    @staticmethod
    def static_method():
        print("This is a static method")

MyClass.static_method()


# In summary, class methods are often used for operations that involve the class itself or need access to class-level attributes, while static methods are used for utility functions that don't rely on the class or instance's state.