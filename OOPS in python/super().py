class A:
    classvar1="i am in A"
    def __init__(self) -> None:
        self.var1="i am inside the class A"
        self.classvar1="instance varable of class A"
        self.special="special"
class B(A):
    classvar1="i am in B"
    def __init__(self) -> None:
        super().__init__()

        self.var1="i am in B"
        self.classvar1="i am the instance the B"
 # this super method is used to the over written variable of the  inherited class
a=A()
b=B()
# print(b.special)
print(b.special,b.var1,b.classvar1)