# ITS LONG FORM IS COMMA - SAPERATED VALUES

import csv

with open("sudhir.csv","w") as f:
    write=csv.writer(f)
    write.writerow(['Eno','Ename','Esalary','Eadd'])
    while True:
        Eno=int(input("Enter the id"))
        Ename=(input("Enter the name of the employee :"))
        Esalary=int(input("Enter the Salary :"))
        Eadd=(input("Enter the Address :"))
        write.writerow([Eno, Ename, Esalary, Eadd])

        option=(input("what you want to do :"))
        if option.lower() == "n":
            break;
