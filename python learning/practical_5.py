# name - sudhir hanmant takale 
# roll no -62
# experiment name - practical 5 / function

def EvenOdd(a):
    if a%2==0:
        return f"Entered number {a} is Even"
    else:    
        return f"number {a} is Odd"
num=int(input("Enter the number"))    
c=EvenOdd(num)
print(c)