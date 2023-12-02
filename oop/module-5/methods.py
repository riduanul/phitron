
def call():
    print("calling someone i don't know")
    return 'call done'


class Phone:
    price = 19000
    color ='blue'
    brand = 'Samsung'
    features = ['camera', 'speaker', 'hammer']
    
    def call(self):
        print('calling one person')    
    def send_sms(self, phone, sms):
        text = f'sending SMS to : {phone} and message: {sms}'
        return text

myPhone = Phone()
print(myPhone.features)
result = myPhone.send_sms(794212131, 'assalamu alaikum')
print(result)