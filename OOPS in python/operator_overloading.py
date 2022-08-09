


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

    def __truediv__(self,other):  # --> this is operator overoladind we can write add also here
        return self.salary/other.salary 
    def __repr__(self) -> str: # this is repr method which return the string
        return self.printdetails()
    def __str__(self) -> str:
        return f"Employee('{self.name}' {self.salary} '{self.role}')"
        # in this str and repr method the str mehod always executes first    
emp1=Employee("sudhir",47858,"sde") 
emp2=Employee("rohan",45653,"kdjfk") 
print(emp1)
print(emp1/emp2)   # --> we can add div the salary name by this method
      