#  In this abstract class we have to define the function that are given in the Shape class if we dont define this function then this will give an error
#  you can't make the object of the shape class 




from abc import ABC ,abstractmethod
class Shape(ABC):
    @abstractmethod
    def printArea(self):  #--> you have to define  this function 
        return 0


class Rectangle:
    type="rectangle"
    sides =4
    def __init__(self) -> None:
        self.length=6
        self.breadth=7
    def printArea(self):
        return self.breadth*self.length
    # def prin(self):
    #      return self.breadth*self.length

        
sudhir=Rectangle()        
print(sudhir.printArea())