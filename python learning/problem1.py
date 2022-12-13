
for i in range(50):
    if i % 3 == 0 and i % 5 == 0:
        print(i, "Divisible by both")
    elif i % 3 == 0:
        print(i, "Divisible by 3")
    elif i % 5 == 0:
        print(i, "Divisible by 5")
    else:
        print(i, "Not divisible by both")
