#name - sudhir hanmant takale
# roll no - 62
# practical no. - 4num=int
num=int(input("enter the number"))
if num>1:
    for i in range(2,num):
        if (num%i)==0:
            print("number  is composite")
            break
        else:
            print("it is a prime number")
else:
    print("number is composite")

