#roll - 62
#name - reading the csv file

from csv import reader

with open("Salary_Data.csv", "r") as f:
    csv_reader = reader(f)
    #this is an iterator
    for row in csv_reader:
        print(row)