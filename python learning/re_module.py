import re
pattern=re.compile("sudhir")
print(type(pattern))
matcher=pattern.finditer(("sudhir is the good boy"))
for m in matcher:
    print("The match is available in the given re statement ",m.start())# m.start is used to indexed of the match found.
    


# write the program to extract date from date from the given string
result=re.findall(r'\d{2}-\d{2}-\d{4}','Hello my name is sudhir hanmant takale we are using the re module in which we are using10-43-6466')
print(result)

