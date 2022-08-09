num = int(input("Enter The Number"))

if num > 1:
    for i in range(2, num):
        if (num % i == 0):
            print(num, "it is composite number")
            break
    else:
        print(num, "is a Prime number")

