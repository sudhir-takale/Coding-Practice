


class BST():
    def __init__(self, key) -> None:
        self.left = None
        self.right = None
        self.key = key
    def insert(self, data):
        if root.key is None: #if root is empty
            self.key = data
            return 
        if self.key > data:
            if self.left:
                self.left.insert(data)
            else:
                self.left = BST(data)
        else:
            if self.right:
                self.right.insert(data) 
            else:
                self.right = BST(data)
    
    


root = BST(None)
root.insert(20)



