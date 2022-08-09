l1=[32,67,234,24,75,43]
l2=[546,22,753,234,74,25]

l=[(23,456),(435,7654),(254,546),(263,635),(436,642)]

#*operator with zip function

# print(list(zip(*l)))  #to zip the list 
l1,l2=list(zip(*l))  #is used to the unzip the given list into two different list

# print(l1)
# print(l2)
new_list=[]
for pair in zip(l1,l2):
       new_list.append(max(pair))  #used to create the lsit of the  only greater element from teh list it compare the element from the l1,l2
print(new_list)