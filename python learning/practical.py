# Name - Sudhir Hanmant Takale
# Roll No. - 62
# practical name  - Experiment no- 6 program to handle error 
try:
    x=int(input("Enter the first number "))
    y=int(input("Enter the second number "))
    c=x/y        
except (ZeroDivisionError,ValueError) as msg:
    print(f"We get {msg} as an Error")    
else:
    print("the answer is :",c)    
finally:
    print("program is fine")    


