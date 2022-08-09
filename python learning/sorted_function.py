fruits=('apple','chickoo','mango','can ','graoes','price')
print(sorted(fruits)) #we apply this function o n the tuple and the set also

guitars=[

{"shakti":"power",'price':678,"model":"mh7897"},
{"guitar":"empire of the world","price":7987,"model":"jha676"},
{"name":"guitar tara","price":8789,"model":"dhsh897"}
]  
#we can here we use the get method in place of the d{"key"}

print(sorted(guitars,key=lambda d:d["price"],reverse=True))