class Cal:
    def __init__(self,a,b) -> None:
        self.a=a
        self.b=b
    def add(self):
        return a+b    
    def sub(self):
        return a-b    
    def mul(self):
        return a*b    
    def div(self):
        return a/b 
a=int(input("Enter the first NUmber :"))           
b=int(input("Enter the second NUmber :"))           
obj=Cal(a,b)
choice=1
while choice!=0:
    print("0,for Exit")
    print("1,for Addition")
    print("2,for substraction")
    print("3,for Multiplication")
    print("4,for disvision")
    choice=int(input("enter your choice"))
    if choice==1:
        print("result",obj.add())
    elif choice==2:
        print("result",obj.sub())    
    elif choice==3:
        print("result",obj.mul())    
    elif choice==4:
        print("result",obj.div())    
    else:
        print("invalid choice")    
print()     


]\