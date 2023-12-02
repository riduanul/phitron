class Calculator:
    brand = 'Casio Ms900'
    def add(self, num1, num2):
        return num1+num2
    def deduct(self, num1, num2):
        return num1-num2
    def multiply(self, num1, num2):
        return num1*num2
    def devide(self, num1, num2):
        return num1/num2
    

myCalculator = Calculator()

result1 =myCalculator.add(4, 6)
print(result1)
result2 =myCalculator.deduct(6, 3)
print(result2)
result3 =myCalculator.multiply(6, 3)
print(result3)
result4 =myCalculator.devide(6, 3)
print(result4)