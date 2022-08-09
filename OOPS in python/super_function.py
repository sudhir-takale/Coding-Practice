import datetime


class Employee:
    company="Google"
    def __init__(self,name,address,role,salary) -> None:
        self.name=name
        self.address=address
        self.role=role
        self.salary=salary
    def getinfo(self):
        return f"hii my name is {self.name} i am from {self.address} my role is {self.role} and my salary is {self.salary}"
    @staticmethod
    def greet():
        
        print("Good Morning , Sir")
     
     
        # print("It's datetime.now()",now.time())
    @classmethod    
    def changevalue(cls,string):
        cls.company=string
        return string
        

sudhir=Employee("Sudhir"," from India","software developer" ,"784$")
print(sudhir.getinfo())
# print(sudhir.greet())
sep=Employee.changevalue("youtube")
print(sep)
