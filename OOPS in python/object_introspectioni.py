# this function is used to get information of object like from which class object is derived and also class is derived
# which directory are used there in the class we require the module inspect  

import inspect

class Employee:
  pass
class Owner(Employee):
    pass
king=Owner()
skill=Employee()
print(type(skill))
print(type(king))
print(id(skill))
print(id(king))
print(dir(skill))
print(dir(king))
k="how are you" # we can also this type of statement to get the information
print(id(k))
