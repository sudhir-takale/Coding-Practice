def is_even(i):
    return i%2==0


numbers=[45,7,345,7,3,47,2,3,8,234,7,23,567,345,58,345,34,65,8,3457,84646,]    
evens=tuple(filter(lambda r:r%2==0,numbers))
# print(evens)

new_evens=[i for i in numbers if i%2==0]
print(new_evens