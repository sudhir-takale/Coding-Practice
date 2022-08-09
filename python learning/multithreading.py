from concurrent.futures import thread
from threading import *
from time import sleep

print(current_thread().getName())
c = current_thread().name = "sudhir"
print(c)



class sudhir(thread):
    def sudhirtakale(args):
        for i in args:
            sleep(12)
            print(args*2)
t = sudhir()

s = [4,6,3,67]
s=sudhirtakale(s)
