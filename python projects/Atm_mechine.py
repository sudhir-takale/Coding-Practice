import time

print("Please enter your Debit Card")

time.sleep(3)

password=1234
balance =5743

pin=int(input("Enter your pin"))

if pin==password:

    while True:

            print("WElCOME TO ATM MECHINE")
            print('''
            1==To check accont Balance
            2 =To withdrawl Money 
            3=Deposited balance
            4=Exit
            ''')
            try:
                option=int(input("Please enter your choice"))
            except:
                print("choose coorect option")    
            if option==1:
                print(f"Your balnce is {balance}")    
            if option==2:
                withdrawl_amount=int(input("How much money you want to withdrawl please enter the value"))
                balance=balance-withdrawl_amount

                print("Your balnce has been debited")

                print(f"Your current balance is  {balance}")
            if option==3:
                deposit_amount=int(input("Please emter the deposit amount"))
                balance=balance+deposit_amount
                print(f"deposited amount credited to your account{balance}")
            if option==4:
                exit()   


            else:
               print("You entered a wrong pin")
               print("Please try again")