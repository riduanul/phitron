#singleton --> one single instance

# if you want a new instance, you will get the old one (already created) instance

class Singleton:
    _instance = None
    def __init__(self) -> None:
        if Singleton._instance is None:
            Singleton._instance = self
        else:
            raise Exception('this is Singleton. Already have an instance, use that one by calling get_instance method')
    @staticmethod
    def get_instance():
        if Singleton.__instance is None:
            Singleton()
        return Singleton.__instance

first = Singleton.get_instance()
second = Singleton.get_instance()
print(first)
print(second)
