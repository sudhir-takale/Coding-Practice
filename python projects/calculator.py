def addition():
    print("Addition")
    n=float(input("enter the number"))
    t=0
    ans=0
    while n!=0:
        ans=ans+n
        t+=1
        n=float(input("enter the number"))
        return  [ans,t]   
def sub():
    print("substaction")
    n=float(input("enter the number"))
    t=0
    sum=0
    ans=0
    while n!=0:
        ans=ans-n
        t+=1
        n=float(input("enter the number"))
        return [ans,t]
while True:
    list=[]        
    print("my first python program ")
    print("simple calculator in python")
    print("a for addtion")
    print(" b for sub")
    c=input(" ")
    if c
