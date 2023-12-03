def full_name(first=0, last=2, **kargs):
    name = f'Full name is: {first} {last}'
    for key, value in kargs.items():
        print(key, value)
    return name
# take parameters in order(serial wise)

#name = full_name('Alu', 'Kodu')
name = full_name(last ='kodu', first='alu', title="taheri", age=25)
print(name)

def a_log(num1, num2):
    sum = num1 + num2
    multi= num1 * num2
    remain = num1 - num2
    #return sum, multi, remain #return as tuple
    return [sum, multi, remain] # return as list

result = a_log(10, 20)
print(result)
