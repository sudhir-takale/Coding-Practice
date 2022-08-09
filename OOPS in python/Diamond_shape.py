class A:
    def set(self):
        print("hii how are you !")
class B(A):
    def set(self):
        print("hii how are you !")
class C(A):
    pass
class D(B,C):
    pass
a=A()
b=B()
c=C()
d=D()
d.set()