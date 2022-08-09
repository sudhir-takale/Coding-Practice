class Library:
    def __init__(self,list,name) -> None:
       self.booklist=list
       self.name=name
       self.lendDict={}
    def display(self):
        print(f"We have the following books available in the our library :{self.name}")
        for book in self.booklist:
            print(book)
    def lendBooks(self,user,book):
        if book not in self.lendDict.keys():
            self.lendDict.update({book:user})
            print("\nLender book database has been updated . Now you can take your book")
        else:
            print(f"Book is being used by the {self.lendDict[book]}")
    def addBooks(self,book):
        self.booklist.append(book)
        print("Book has been added to the book list")
        
    def returnBook(self,book):
        self.lendDict.pop(book)

if __name__=='__main__':
    sudhir=Library("['python','structure','algorithm by clrs','aptipedia',applied mathematics',dicrete maths']","Sudhir's" )
    while(True):
        print(f"Welcome to {sudhir.name} Library. Enter your choice to continue--")
        print("1. Display Book")
        print("2.Lend Book")
        print("3.Add a Book")
        print("4.Return a Book")
        user_choice=int(input("Enter the choice 1--"))
        # if user_choice not in ['1','2','3','4']:
        #     print("Please enter the valid option")
        #     continue
        # else:
        #     user_choice=int(user_choice)
        if user_choice==1:
            sudhir.display()
        elif user_choice==2:
            book=input("Enter the name of the book which you want to lend --")
            user=input("Enter your name-")    
            sudhir.lendBooks(user,book)

        elif user_choice==3:
            book=input("Enter the name of the book which you wan to add--")  
            sudhir.addBooks()
        elif user_choice==4:
            sudhir.returnBook()

            
        else:
            print("Not a valid Option")
        print("Press 0 to quit and 1 for continue")
        user_choice2=""
        while(user_choice2== 1and user_choice2==0):
            user_choice2=int(input("enter your choice 2"))    
            if user_choice2==0:
                exit()
            if user_choice2==1:
                continue




