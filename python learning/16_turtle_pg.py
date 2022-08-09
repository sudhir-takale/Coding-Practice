import sys
import turtle

def border(t,screen_x,screen_y):
    t.penup()
    t.home()
    t.forward(screen_x/2)
    t.right(90)
    t.forward(screen_y/2)
    t.setheading(180)
    t.pencolor("red")
    t.pendown()
    t.pensize(13)
    