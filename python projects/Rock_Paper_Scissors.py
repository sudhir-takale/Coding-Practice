import random
ccount=0
ucount=0
while True:
    list = ['rock', 'paper', 'scissor']
    print("Welcome to the game ---Game Start--")
    print("You want to Play press 1")
    print("Don't want to Play press 2 to Exit")
    uchoice=int(input("Enter you choice :-->"))
    if uchoice==1:
        for attempt in range(1,6):
            print(""""
            1 for rock
            2 for paper
            3 for scissor
            """)
            userchoice=input("enter your choice")
            if userchoice==1:
                userchoice="rock"
            elif userchoice==2:
                userchoice="paper" 
            elif userchoice==3:
                userchoice="scissor"   
            # else:
            #     print("Invalid choice please enter the right choice")
            cchoice=random.choice(list)
            if userchoice==cchoice:
                print("Draw game")
                ccount=ccount+1_
                ucount=ucount+1
            elif (userchoice=="paper" and cchoice=="rock")or (userchoice=="scissor" and cchoice=="paper") or (userchoice=="rock" and cchoice=="scissor"):
                print("You won this turn")
                ucount=ucount+1
            elif (userchoice=="rock" and cchoice=="paper")or (userchoice=="paper" and cchoice=="scissor") or (userchoice=="scissor" and cchoice=="rock"):
                print("Computer won this turn")
                ccount=ccount+1
            print(ccount)
            print(ucount)





    else:
        break


