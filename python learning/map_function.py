#filter function in python
# to use the filter function we have to import it first then only we can use in it...
from functools import reduce


def even(n):

    return n % 2 == 0


def odds(nums):
    return nums % 2 != 0


def update(n):
    return n + n


nums = [
    1, 4, 7, 435, 89, 35, 435, 8, 234, 8, 326, 87, 356, 345, 23, 85, 34, 754,
    2456
]

# evens=list(filter(even,nums))

odd = list(
    filter(odds, nums)
)  #the filter functions takes two arguments as function and the iterable


# evens=list(filter(lambda n:n%2==0,nums)) #by using the lambda function
def add_all(a, b):
    return a + b


print(odd)
evens = list(map(update, odd))
evens = list(map(lambda n: n + n, odd))  #by using the lambda function

sum = reduce(add_all, odd)
sum = reduce(lambda a, b: a + b, nums)  #this by using the lambda function
print(sum)
# print(evens)
