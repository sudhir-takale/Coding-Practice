from json.tool import main
from this import s
from unittest import removeResult


def sudhir( a, b):
    c = a + b 
    return c


if __name__ == '__main__':
     a = int(input("enter the number"))
     b = input("enter the second number")
     s = sudhir(a , b)
     print(s)

         