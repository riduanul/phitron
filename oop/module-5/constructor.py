class Phone:
    manufactured = 'China'
    
    def __init__(self, owner, brand, price):
        self.owner = owner
        self.brand = brand
        self.price = price
    
    def send_sms(self, num, sms):
        text = f'sending to : {num} {sms}'
        return text

myPhone = Phone('Md. Riduanul Haque', 'Samsung', 22500)
herPhone = Phone('she', 'Apple', 122500)
print(myPhone.brand, myPhone.owner, myPhone.price)
myPhone.send_sms(3434, 'hello she')
print(herPhone.brand, herPhone.owner, herPhone.price)
