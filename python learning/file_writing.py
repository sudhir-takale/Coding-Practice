# # writing the data in to the file

# f=open("sudhir.txt","w")
# f.write("hii sudhir how are you looking \nthat you are practing the file function")
# f.close()


# f=open("sudhir.txt")
# k=f.read()
# print(k)

#  #this is by using the try except function which doesnot gives any error if the file doex not exist
# try:
#     f=open("suhth.txt")
#     f.read()
# except:
#     print("file name doesn't exist")
# finally:
#     f.close()    


f=open("sudhir.txt","w")
list=["sudhir\n",'12\n','shaurya\n','sanvi\n']
f.writelines(list) # it is used to write the data in the format of the list dictionary
f.close()

f=open("sudhir.txt","a")  #it is used to append the data

f.write("\n this is sudhir hanmant takale I am solapur living in the village of the laxmi dahiwadi")

f.close()
with open("sudhir.txt","r") as f:
    k=f.readlines(2)
    print(k)

# we can copy the data of the file into the second file

# file=open("sudhir.txt")

# op=open("copiedfile.txt","w")

# op.write(file.read())  # wehave to give here the file name and ites mode also
# op.close()
# file.close()

