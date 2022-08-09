import random
import string
print("Welcome to password !")
length=int(input("Enter the data of password"))

lower=string.ascii_lowercases
upper=string.ascii_uppercase

num=string.digits
symbols=string.symbols
all=lower+upper+num+symbols

temp=random.sample(all,length)
password="".join(temp)

print(password)
