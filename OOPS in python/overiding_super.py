from _typeshed import Self


class Employee:
    name="sudhir hanmant takale"
    def __init__(self,name,address,role) -> None:
        self.name=name
        self.address=address
        self.role=role
        self.special="I am a special variable"
    def printDetails(self):
        print(f"My  name is {self.name} I am living in the {self.address} and my role is {self.role}")    
class Manager(Employee):        
    nuame=" I am work under the manager"
    def __init__(self, iname, address, role) -> None:
        self.iname=iname
        self.address=address
        self.role=role
    def printDetails(self):
        print(f"my name is {self.name} my {self.address} and my role is {self.role}")  
        super().__init__()


        
emp=Employee("sunny","from pune","qa")        
man=Manager("ravi","from india","chef")
man.printDetails()



