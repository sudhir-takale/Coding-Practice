#using the alternative the constructor used in the function 


class Employee:
    no_leaves=567
    def __init__(self,name,salary,role):
        self.name=name
        self.salary=salary
        self.role=role

    def printdetails(self):
        return f"name is {self.name} salary is {self.salary} and role is {self.role}"

    @classmethod
    def change_leaves(cls,new_leaves):
        cls.no_leaves=new_leaves
    @classmethod
    def from_str(cls,string):
        return cls(*string.split("-")) # we use the kwargs here 
sudhir=Employee("sudhir",4758,"sde")
sudhir.change_leaves(43)
lara =Employee.from_str("harry-47367-instructor")
print(lara.name)
# print(sudhir.no_leaves)