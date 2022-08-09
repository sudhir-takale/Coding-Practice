# private- you can access onlyin the  class
# public - accessed from anywhere
# protected- class and only child classes of the base class

class Owner:
    company="google"
    no_of_leaves=44
    var=9
    __private="hii i am the private var"
    _protect="hii i am the protected variable"
    

        



    # passclass Employee(Owner):


ow=Owner()
print(Owner.__private)

# emp=Employee()
# print(emp.var) # we can access the public var from anywhere
# print(emp._protect)   # we can also access the protected var
# print(emp.__private)# here we can acess the private var of the class


