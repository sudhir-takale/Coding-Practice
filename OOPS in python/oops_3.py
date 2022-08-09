class Employee:
    no_leaves=567
    def __init__(self,aname,asalary,arole):
        self.name=aname
        self.salary=asalary
        self.role=arole

    def printdetails(self):
        return f"name is {self.name} salary is {self.salary} and role is {self.role}"

    @classmethod
    def change_leaves(cls,new_leaves):
        cls.no_leaves=new_leaves

sudhir=Employee("sudhir",4758,"sde")
sudhir.change_leaves(43)
print(sudhir.no_leaves)