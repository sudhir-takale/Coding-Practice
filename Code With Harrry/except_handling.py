try:
    fh=open("sud hir.txt","w")
    fh.write("hii sudhir how are you i am playing with except handling in teh file ")
except IOError:
    print("error file cant open ")
else:
    print("file content written sucssfully")    
    fh.close()