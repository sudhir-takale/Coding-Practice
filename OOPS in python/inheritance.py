class Employee:
    leaves=65
    def __init__(self,name,salary,skills):
        self.name=name
        self.salary=salary
        self.skills=skills
    def details(self):
        return f"My name is {self.name} salary is {self.salary} and my skills are {self.skills}"
    
sudhir=Employee("sudhir",678698,["python","c","angular js"])
# print(sudhir.details())

class programmer(Employee):
    def __init__(self, name, salary, skills):
        self.name=name
        self.salary=salary
        self.skills=skills
    def printdetails(self):
        return f"My name is {self.name} salary is {self.salary} and my skills are {self.skills}"
    
shaurya=programmer("shaurya",57867,"python")
print(shaurya.printdetails())
       