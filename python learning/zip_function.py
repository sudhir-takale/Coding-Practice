# zipping means combining two or  more object we can use the zip function anywhere after that we have to type cast it to the tuple or list or set

# names=['navin','kiran','harsh','sudhir']

# comp=['dell','apple','microsoft','japan third party']

# pack=[101,56,356,8654]

# zipped=tuple(zip(names,comp,pack))  #here we can use the  set dictionary list tuple for formatting but the set does not repeat the same values

# # for (*a,b) in zipped:  #by using the zip function 
# #     print(a,b)
# print(zipped)



list=['sudhir','takale','shaurya','bansode']

list2=['sanket','pune','laxmi dahiwadi','mangalwedha']


zir=tuple(zip(list,list2))
# print(zir)




square=[i**2 for i in range(1,6)]
print(square)