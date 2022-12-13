class Friends:
    def __init__(self,name,roll, hobbies) -> None:
        self.name = name
        self.roll = roll
        self.hobbies = hobbies

    def writeInFile(self):
        with open("sudhir.txt","w") as f1:
            f1.write("{self.name}, {self.roll},{self.hobbies}")
            # f1.write(prajwal.name)

    def readFile(self):
        with open("sudhir.txt","r") as f:
            f.readline()

kapil= Friends("kapil",57,"Travelling")
Prashant = Friends("Prashant",22,"Reading")
prajwal = Friends("Prajwal",5,"Pubg")

kapil.writeInFile()
Prashant.writeInFile()
prajwal.writeInFile()
prajwal.readFile()