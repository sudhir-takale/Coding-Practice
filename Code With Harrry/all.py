# import datetime
# now=datetime.datetime.now()
# print("Current date and time :")
# print(now.strftime("%Y-%m-%d")
def print_table(times_values):
    count = 1
    while count<13:
        result=result*times_values
        print(count,"times",times_values,"equals",result)
        count+=1
print_table(5)