def gen(n):
    for i in range(n):
        yield i
g=gen(10)
# print(o)# this will print only the address of the generator
print(g.__next__())
print(g.__next__())
print(g.__next__())
print(g.__next__())
print(g.__next__())
print(g.__next__()) # this function is used to generate the next number



# this is the wrong statement / code so don't consider the next step::
# h="hii am a sudhir hanmant takale now tell me what is your name "
# for h in range(h):
#       # as the strings are iterable so we use this function for iteration 
#     print(h.__next__())
#     print(h.__next__())
#     print(h.__next__())
#     print(h.__next__())
 # 

