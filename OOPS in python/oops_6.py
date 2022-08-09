class Sudhir:
    surname="lara "
    def __init__(self,name,address,hobbies,role) -> None:
        self.name=name
        self.address=address
        self.hobbies=hobbies
        self.role=role

    def details(self):
        return f" Hii,My name is {self.name} . I am living in the { self.address} . { self.hobbies} these are my Hobbies and my role is {self.role} this is all about me. Thank you !"

    @classmethod
    def change_surname(cls,new_name):
        cls.surname=new_name
        return new_name
    @classmethod
    def from_dash(cls,string):
        return cls(*string.split("-"))
    @staticmethod
    def good(string):
        print("This is good thing "+string)
        
phone=Sudhir("lara"," belgium ","singing,dancing","student")

# mobile=Sudhir()
phone.change_surname("sudhir")
print(phone.surname)
print(phone.role)
mobile=Sudhir.from_dash("sudhir-main menu-singing-student") #function takes argument in string
print(mobile.details())        
print(mobile.good("Shaurya"))
Sudhir.good("shaurya")