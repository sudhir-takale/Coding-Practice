def function(list):
    return len(list)


names=['sudhir','hanmant','shaurya','mohit']
# print(max(names,key=len))   #key is used to say in which parammeter we want the list 

# print(max(names,key=lambda items:len(items)))

student=[

{"name":"sudhir","score":546,"roll":64},
{'name':'shaurya','score':456,'roll':78},
{'name':'sumit','score':56,'roll':8},

]
k=max(student,key=lambda items:items.get('score'))['name']

print(k)


student={

    "navin":{"score":476,'age':64},
    "kelvin":{'score':5839,'age':54},
    "carry":{'score':3948,"age":46}

}

# print(max(student,key=lambda items:items.student('navin')['score'])) #wrong function