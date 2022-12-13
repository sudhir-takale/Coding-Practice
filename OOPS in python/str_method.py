# In this program we have seen the dunder methods add str and repr here we can give only two argu. in add method and the firstly the str method exe.then and then only the repr method exe....



class Employee:
    company="google"
    def __init__(self,name,salary,role) -> None:
        self.name=name
        self.salary=salary
        self.role=role
    def getInfo(self):
        return f"My name is {self.name} and my salary is {self.salary} and i'm a{self.role}"    
    def __add__(self,one):
         return self.name+one.name

    def __repr__(self) -> str:
        return f"hii my name is {self.name} and my role is {self.role}"

    def __str__(self):
        return f" Hi my name is {self.name} and my salary is {self.salary}"
#the str method run first then repr method execute....

   


emp1=Employee("sudhir",47356794,"sde")
# emp2=Employee("shaurya",47356794,"sde2")
# emp3=Employee("jdfnj" ,47683,"dlhfg") #--> we can't make add three methods 
print(emp1)
