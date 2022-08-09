# a=str(input("Enter teh name of teh file :"))
# file2=open("a","r")
# line=file2.readline()
# # while(line!=""):
# #     print(line)
# #     line=file2.readline()
# print(line)
# file2.close()

# fname=input("enter teh name of the file:")
# num_lines=0
# open=("fname","r")
# for line in fname:
#     num_lines+=1
# print(num_lines)


# name=input("enter the name of the file:")
# file=open(name,"a")
# c=input("enter teh string to append to file:")
# file.write("\n")
# file.close()
# print("content of the appended file:")
# file2=open(name,"r")
# line=file2.readline()
# while(line!=" "):
#     print(line)
# # print(line)
# file2.close()

name = input("Enter the name of the file")
word = input("Enter the word")
k = 0
with open(name, "r") as f:
    for line in f:
        words = line.split()
        for i in words:
            if(i == word):
                k = k+1
print("Occurrences of the word:")
print(k)
