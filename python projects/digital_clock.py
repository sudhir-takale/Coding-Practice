from tkinter import *
import time
clock=0
def digital():
    d=time.strftime("%H:%M:%S")
    clock.config(text=d)
    clock.after(200,d)
root=Tk()
root.title("Digital clock - by sudhir takale")
clock.label(root,font=("times",100,"bold"),bg="blue")
clock.grid(row=2,column=1)
digital()
root.mainloop()