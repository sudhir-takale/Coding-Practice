# name - sudhir takale
# roll no - 62

class Employee():
    def __init__(self, name, salary) -> None:
        self.name = name
        self.salary = salary

    def __mul__(self, other):
        return self.salary *other.days
class TimeSheet():
    def __init__(self, name, days):
            self.name = name
            self.days = days

a = Employee("sudhir", 34544)
time = TimeSheet("shaurya",345)
print('salary',a*time)

