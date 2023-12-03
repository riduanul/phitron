from Bank_management import Bank, Account, SavingsAccount, CurrentAccount, Admin


def main():
    print('main')
    

islami = Bank('Islami Bank Ltd')


currentUser = None

while True:
    if currentUser == None:
        print()
        print("Press R for register L for Login:")
    
        ch = input()
    
        if ch == 'R':
            name = input("Enter Name: ")
            email = input("Enter Email: ")
            password = input("Enter password: ")
            address = input("Enter Address: ")
            type = input("account type enter 'sv' for savings or 'cur' for current or 'ad' for admin account: ")
        
            if type == 'sv':
                sv_account = SavingsAccount(name, email, password, address)
                islami.add_account(sv_account)
                currentUser = sv_account
                
            elif type == 'cur':
                cur_account = CurrentAccount(name, email, password, address)
                islami.add_account(cur_account)
                currentUser = cur_account 
            elif type == 'ad':
                admin = Admin(name, email, password, address)
                islami.add_account(admin)
                currentUser = admin 
            
            else:
               print('account type is invalid')
        elif ch == 'L':
            email = input("Enter Email: ")   
            password = input("Enter password: ")
            for account in islami.accounts:
                if account.email ==  email and account.password == password:
                    currentUser = account
                else:
                   print('Wrong email or password !')   
    else:
        print()
        print(f'\n Welcome to the islami bank Mr. {currentUser.name}  !')
        print()
        
        if currentUser.type == 'savings':
            print('Press 1 for withdraw')
            print('Press 2 for deposit')
            print('Press 3 for check balance')
            print('Press 4 for transaction history')
            print('Press 5 for take loan')
            print('Press 6 for transfer amount')
            print('Press 7 for account info')
            print('Press 8 for Main Menu')
            ch = int(input())
            if ch == 1:
                amount = int(input("Enter amount: "))
                currentUser.withdraw(amount)
            elif ch == 2:
                amount = int(input("Enter amount: "))
                currentUser.deposit(amount)
            elif ch == 3:
                currentUser.available_balance()
            elif ch == 4:
                currentUser.transaction_history()
            elif ch == 5:
                amount = int(input("Enter Amount: "))
                currentUser.loan(islami, amount)
            elif ch == 6:
                account_no = input("Enter Account_no: ")
                amount = int(input("Enter Amount: "))
                currentUser.transfer_money(islami, account_no, amount)
            elif ch == 7:
                currentUser.show_info()
            elif ch == 8:
                currentUser = None
                                
        elif currentUser.type == 'current':
            print('Press 1 for withdraw')
            print('Press 2 for deposit')
            print('Press 3 for check balance')
            print('Press 4 for transaction history')
            print('Press 5 for take loan')
            print('Press 6 for transfer amount')
            print('Press 7 for Account Info')
            print('Press 8 for Main Menu')
            ch = int(input())
            if ch == 1:
                amount = int(input("Enter amount"))
                currentUser.withdraw(amount)
            elif ch == 2:
                amount = int(input("Enter amount"))
                currentUser.deposit(amount)
            elif ch == 3:
                currentUser.available_balance()
            elif ch == 4:
                currentUser.transaction_history()
            elif ch == 5:
                pass
            elif ch == 6:
                account_no = input("Enter Account_no")
                amount = int(input("Enter Amount"))
                currentUser.transfer_money(islami, account_no, amount)
            elif ch == 7:
                account_no = input('Account_no: ')
                amount = int(input("Amount: "))
                currentUser.show_info(islami, account_no, amount)
            elif ch == 8:
                currentUser = None
        elif currentUser.type == 'admin':
            print('Press 1 to Create Account')
            print('Press 2 to see all Users')
            print('Press 3 for total balance of bank')
            print('Press 4 for total loan amount')
            print('Press 5 for switched loan feature')
            print('Press 6 for delete account')
            print('Press 7 For Main Menu')
            
            ch = int(input())
            if ch == 1:
                name = input("Enter Name: ")
                email = input("Enter Email: ")
                password = input("Enter password: ")
                address = input("Enter Address: ")
                type = input("account type enter 'sv' for savings or 'cur' for current or 'ad' for admin account: ")
        
                if type == 'sv':
                    sv_account = SavingsAccount(name, email, password, address)
                    islami.add_account(sv_account)
                    currentUser = sv_account
                    
                elif type == 'cur':
                    cur_account = CurrentAccount(name, email, password, address)
                    islami.add_account(cur_account)
                    currentUser = cur_account 
                elif type == 'ad':
                    admin = Admin(name, email, password, address)
                    islami.add_account(admin)
                    currentUser = admin 
                
                else:
                    print('account type is invalid')
            if ch == 2:
                currentUser.see_all_accounts(islami)
            elif ch == 3:
                currentUser.see_balance_of_bank()
            elif ch == 4:
                print(currentUser.loan_amount)
            elif ch == 5:
                switch = bool(input("Write True to on False to off: "))
                currentUser.loan_feature_on_off(islami,switch)
            elif ch == 6:
                account_no = input("Enter account no: ")
                currentUser.delete_account(islami, account_no)
            elif ch == 7:
                currentUser = None
        else:
             print('Invalid Entry')
        





if __name__ == '__main___':
    main()