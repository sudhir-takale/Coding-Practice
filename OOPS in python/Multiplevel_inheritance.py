# in this program we do the some changes then this program will run rightly .....  



class Dad:
    basketball=45
    def __init__(self,name,six):

        self.name=name
        self.six=six
    def printdetails(self):
        return f"my name is {self.name} and my salary is {self.six} ."
    
class Son(Dad):
    dance=345
    def __init__(self,name,role):
        self.name=name
        self.role=role
    def details(self):
        return f" I can dance the {self.dance} times and my name is {self.name}  and i am a {self.role}."
class Grandson(Son):
    volleyball=45
    def __init__(self,please, role):
        self.please=please
        self.role=role
    def print(self):
        return f"I can play the {self.volleyball } times . my salary {self.please} and my role is {self.role}"
larry=Dad("larry","sammy")
carry=Son("carry","second engineer")
# harry=Grandson("fujistu","student")
print(Son.printdetails())

#In this class the grandson have inheritance of the class son and dad we can access the all  information  from the son and dad from the grandson