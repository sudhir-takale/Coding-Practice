# write to print how many numbers are divisible by 5

numbers=[]
for x in range(1500,2700):
    if(x%5 == 0)and(x%7 == 0):
        numbers.append(str(x))
print(", ".join(numbers))
