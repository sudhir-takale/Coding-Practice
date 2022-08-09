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

class Programmer():
    def __init__(self, name, salary, skills):
        self.name=name
        self.salary=salary
        self.skills=skills
    def printdetails(self):
        return f"My name is {self.name} salary is {self.salary} and my skills are {self.skills}"

class Player(Employee,Programmer):
    def __init__(self, name,salary,languages):
        self.name=name
        self.langauges=languages
    def formatter(self):
        return f"My name is {self.name} I can speak the {self.langauges} languages ."
        
    
    
lara=Player("lara",47628,"[angular js ,python ,javascript]")       
# shaurya=programmer("shaurya",57867,"python")
print(sudhir.skills)
print("hello world the program runs sucesfully can we run the same thing")
       