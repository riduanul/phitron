balance = 3000

def bu_things(item, price):
    global balance
    print(f'previous balance value: ', balance)
    balance = balance - price
    print(f'Balance after buying {item}: ', balance)
    
bu_things('sunglass', 1000)