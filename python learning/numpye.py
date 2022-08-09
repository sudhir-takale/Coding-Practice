# it is used to solve the complex probelem createdd by jim hugunin
# it is act as the backbone
# this is an open source library
# n dimensional array can be created using the
#this an third party module  which is not the part of the python

import array

import numpy
import sys
#sys.getsizeof() it is used to get the size of operator
#creatipn of array using array mudule

a = array.array("i", [45, 74, 345, 74, 4])
print(type(a))
print(a)

#creation f array using numpy module

a = numpy.array([345, 4, 35, 234, 74, 7])
print(type(a))
print(a)

#vector operatrion on array
#vector opearon means changing the every element 
#we can apply any operation on teh array elements of teh array

a = numpy.array([45, 743, 23, 74, 234, 23, 74, 75])

print(a)

a=a+1 # we add 1 to every elment of the array
print(a)
a=a*a #creating new array withe ista sqaure value
print(a)
a=a//2
print(a)


#check with is vector operation are applicable or not
 # the vector operaton are not possible on the list

# l=[34,63,24,763,63,]

# print(l)

# l=l+1
# print(l)

# memory consumes checking

#array consumes less memory as compared to that of the list
# import sys
# a=numpy.array([45,874])
# l=[45,874]

# print(sys.getsizeof(a))
# print(sys.getsizeof(l))

# help(sys)