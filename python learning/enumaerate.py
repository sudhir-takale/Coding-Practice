names=['adv','dgsd','shsd','sfjhs']


# pos=0
# for name in names:
#     print(f"{pos} {name}")  #this is by using the ancient method of the writing the code
#     pos=pos+1
    


for pos,name in enumerate(names):  #this is  by using the enumerate function
    print(f"{pos}  {name}")



def find_pos(l,tar):
    for pos ,name in enumerate(l):
        if name==tar:
            return pos
        else :
            return -1
print(find_pos(names,"adv\k"))           
