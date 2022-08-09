#generators in python
                  

# square=[i*2 for i in range(1,11)]
# print(square)

#generators are iterable

square=(i*2 for i in range(1,4))

print(next(square))

#how many times you write the next word it will return the only the items from the given items