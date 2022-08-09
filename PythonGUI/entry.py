from cProfile import label
from pydoc import text
from tkinter import *


root = Tk()



#list box

name = Label(text = 'sudhir')
listbox = Listbox(justify='center')
listbox.insert(3,'sudhir')
listbox.insert(5, 'sanket')


Button = Button(text='delete button',command=lambda listbox = listbox:listbox.delete(_Anchor))

name.pack()
listbox.pack()
Button.pack()







root.mainloop()