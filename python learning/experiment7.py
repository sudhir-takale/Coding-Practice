# # name = sudhir hanmant takale 
# # roll - 62

class NumberClass():
    def __init__(self, x, y):
        self.x = x
        self.y = y
    def swapNums(self):
        self.x = input("enter the first number")
        self.y =input("enter the second number")
        print("before swapping ",self.x, self.y)
        self.x = int(self.x) - int(self.y)
        self.y = int(self.x) + int(self.y)
        self.x = int(self.x) - int(self.y)
        print("after swapping",self.x, self.y)

obj = NumberClass(int , int)
obj.swapNums()










