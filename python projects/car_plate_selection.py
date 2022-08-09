car_plates=['MH13HT4563','MH12GH4567','MH14HY7698','MH67FH7698','MH12GT7868','MH34G878','MH56GF879']

odd_days=['saturday','tuesday','thursday']
even_days=['monday','wednesday','friday']
pass_list=[]
today=input("Enter day of the week from(sunday to saturday)")
for plate in car_plates:
    last_digit=int(plate[-1])
    if today in odd_days and last_digit%2!=0:
        pass_list.append(plate)
    elif today in even_days and last_digit%2==0:
        pass_list.append(plate)
    elif today=="sunday":
        pass_list.append(plate)

print(pass_list)