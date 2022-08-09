class Student:
    name = "sudhir hanmant takale"

    def __init__(self, college_name, salary, dream_job) -> None:
        self.college_name = college_name

        self.marks = salary
        self.dream_job = dream_job

    def showStudentDetails(self): 
        print(
            f" I am studying in {self.college_name}  I got marks {self.salary} . and i want to become the {self.dream_job} this is all about me !"
        )


class Employee(Student):
    def __init__(self, name, company, salary) -> None:
        self.name = name
        self.salary = salary
        self.company = company

    def allAboutEmployee(self):
        print(
            f" I am {self.name} ,I am currently working with {self.company} and my salary is {self.salary}"
        )


class Manager(Employee):
    name = "shaurya  mali"

    def __init__(self, company, role, salary):
        self.role = role
        self.company = company
        self.salary = salary

    def managerDetails(self):
        print(
            f"Hii  I am workin with {self.company} ,my role is {self.role} with hte package of {self.salary}"
        )


sudhir = Student("sknscoe", 43567, "software developer")
shaurya = Manager("amzon", "software developer", 98789)
sanvi = Employee("sanvi", "amazon", 8793)
