# from cProfile import label
# from tkinter import *
# from tkinter import ttk
# from calendar import month_name
# root = Tk()

# label = Label(text='please select month')
# label.pack()

# monthcb = ttk.Combobox(root)
# monthcb.pack()

# monthcb['values'] = [month_name[m][0:3] for m in range(1,13)]

# k = ttk.Checkbutton()
# k.pack()


# root.mainloop()



from multiprocessing import Process
def display():
    print ('Hi !! I am Python')
if __name__ == '__main__':
    p = Process(target=display)
    p.start()
    p.join()