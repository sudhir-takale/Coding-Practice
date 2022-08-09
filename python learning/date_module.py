#this module contains various functiion
import datetime
# t=datetime.datetime(2020,12,20,10,56,45,345) # this is the datatime constructor
# print(t)
print(datetime.datetime.today())
print(datetime.date(2020, 12, 23))
print(datetime.time(12, 45, 34, 567))  #pritn the given date
# time delta function
c1 = datetime.timedelta(days=64,hours=54)
c2 = datetime.timedelta(days=87,hours=634)
print(c1 - c2)
