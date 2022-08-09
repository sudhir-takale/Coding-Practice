# class Student:
#     pass

# harry=Student()
# kali=Student()
# harry.name="harry"
# harry.std=12
# print(harry.name)

# kali.subjects=['hindi','english','physics']
# print(kali.subjects)



# class Employee:
#     no_leaves=567
#     pass
# harry=Employee()
# sudhir=Employee()

# harry.name="sudhir"
# harry.salary=2345
# sudhir.name="shaurya"
# sudhir.salary=4358678
# sudhir.role="sde"
# print(sudhir.no_leaves)
# Employee.no_leaves=4567
# print(sudhir.no_leaves)
# print(Employee.__dict__)

# from typing import AsyncContextManager


class Employee:
    no_leaves=567
    def __init__(self,aname,asalary,arole):
        self.name=aname
        self.salary=asalary
        self.role=arole

    def printdetails(self):
        return f"name is {self.name} salary is {self.salary} and role is {self.role}"

# harry=Employee()
sudhir=Employee("sudhir",4758,"sde")

# harry.name="sudhir"
# harry.salary=2345
# sudhir.name="sudhir"
# sudhir.salary=4358678
# sudhir.role="sde"
print(sudhir.salary)
