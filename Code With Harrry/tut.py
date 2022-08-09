class Employee:
    "This is class of employee name and salary given to him in the year of the december"
    empcount=0
    def __init__(self,name,salary):
        self.name=name
        self.salary=salary
        Employee.empcount+1
    def displaycount(self):
        print("Total employee %d"% Employee.empcount)
    def displayemployee(self):
        print("name:",self.name,"salary:",self.salary)
emp1=Employee("sudhir",1200000)
emp2=Employee("laptop",435687)
print("docs",Employee.__doc__)
print("name",Employee.__name__)
# print("salary",Employee.__salary__)
print("module",Employee.__module__)
print("bases",Employee.__bases__)
print("dictionary",Employee.__dict__)


    