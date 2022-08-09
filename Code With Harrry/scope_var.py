#  We are going to learn about the scope of variable in teh function
# a=45
def sudhir():
    

    # a = 34
    def call():
        global a
        a=23
    print("before calling the function")
    call()
    print("after calling the function")


sudhir()
print(a)
