import turtle
turtle.bgcolor("lightpink")
turtle.pensize(2.5)
turtle.speed(0.5)
color = ['red','blue','green','orange']
for a in range(100):
    for i in color:
        turtle.color(i)
        turtle.circle(100)
        turtle.left(10)

turtle.mainloop()