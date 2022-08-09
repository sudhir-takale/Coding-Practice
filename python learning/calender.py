# roll no - 62
# calender module in python

import calendar
calendar.setfirstweekday(3)
y = int(input("Input the year : "))
m = int(input("Input the month : "))
print(calendar.month(y, m))
