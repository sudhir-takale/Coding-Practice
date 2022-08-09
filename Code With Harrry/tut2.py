# str="sudhir2001"
# print(str.isdecimal())
# str="4545657"
# print(str.isdecimal())

# from typing import Counter


# count=0
# while(count<13):
#     print("count is",count)
#     count=count+1
# print("The loop is end")    


# for i in range(1,14,2):
#     print("the numbers are",i)
# print("loop is done")

# str=input("enter the string")
# for letters in str:
#     print("the letters are",letters)
# print(len(str))

# list=[23,56,23,678,345,879,2345,789,343,67879,3456,879,435,954,345647,78094]
# for num in list:
#     if num%2==0:
#        print("the numbers are",num)
# else:
#     print("given list does not contains any numbers which is divisible by 2")    

# import sys
# # k=0
# for i in range(1,11):
#     for j in range(1,11):
#         k=i*j
#         print(k,end=" ")
#     print()    

# for i in range(0,10):
#     for j in range(i):
#         print("*",end=" ")
#     print()    




# for letters in "python":
#     if letters=="h":
#         continue
#     print("current letters",letters)



# var=50
# for i in range(1,32):
#     if i%2!=0:
#         continue
#     print("numbers is",i)



import sys 
def fab(n):
    a,b,counter=0,1,0
    while True:
        if(counter>n):
            return 
        yield a
        a,b=b,a+b
        counter+=1
f=fab(10)
while True:
    try:
        print( next(f) ,end="")
    except StopIteration:
        sys.exit()