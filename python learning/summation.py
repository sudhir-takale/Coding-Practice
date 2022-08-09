def square(n):
    return n**2

def cube(n ):
    return n**3


def summation(low, high, fn):
    sum = 0
    for i in range(low, high + 1):
        val = fn(i) #function will pointing to the same function
        sum = sum + val
    return  sum

c=summation(1,4,square)
print(c)