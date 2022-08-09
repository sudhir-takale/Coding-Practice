# from types import DynamicClassAttribute


dict ={}
while True:
    print("--Welcome to Birthday Reminder App--")
    print("1.show Birthday date")
    print("2.Add to Birthday List")
    print("3. Exit")
    
    choice=int(input("Enter your choice"))
    if choice==1:
        if (dict.keys()==0):
            print("Nothing to show")
        else:
            name=input("Enter the name to look for birthday")
            birthday=dict.get(name,"no data found")     
            print(birthday)
    elif choice==2:
        name=input("Enter your friend name")        
        date=input("Enter the birthday date")
        dict(name)==date
        print("Bithday Added to the List")
    elif choice==3:
        break
    else:
        print("Plese choose a valid option")

