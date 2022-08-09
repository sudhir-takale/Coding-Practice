class Student:
    name_of_school="vidyamandir highschool laxmi dahiwadi"
    def __init__(self,name,role,address) -> None:
        self.name=name
        self.role=role
        self.address=address
    def printdetails(self):
        return f"Student name is {self.name} role is {self.role} and address is {self.address}"
first=Student("lara","monitor_of_class", " from newyork  living in belgium")       
print(first.name_of_school)
