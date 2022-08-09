import random
number=random.randint(1,100)
print(number)

while input!=9:
    k=0
    m=0
    n=0
    user=int(input("Enter your Number between 1 and 100 :"))
    if user==number:
        print("You Hit it !")
        break
    elif user<number:
        print("You Entered a Small number ! Please enter a Greater number :")
        
    elif user>number:
        print("You Entered a Greater number ! Please enter a Smaller number :")
        
    else:
        print("Thank you for playing game")
input=+1
# keys=k+m+n   
print("number of attempts are ",input)    

        



