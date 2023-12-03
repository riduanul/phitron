# in, not, not in, is, is not

a = 2
if a > 5:
    print(" 5 er beshi")
    print("koto beshi k jane?")
elif a > 3:
    print("Yes you are right")
elif a == 2:
    print("Ha 2 er soman")
else:
    print("choto choto raate lambi ho jati hai")

boss = True
if boss is True:
    print("Assalamu alikum")
    if boss is not True:
        print("age salam den tarpor kotha bolen")
    else:
        print("salam salam hajar salam")
elif boss is not True:
    print("Salam dite hoi janen na?")
