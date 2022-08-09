def countDown(n):
    while n > 0:
        print('Counting next number..')
        yield n # creating the number one by one
        n = n - 1

for i in countDown(6):
    print(i)