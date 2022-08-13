#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> // if you want to return a boolean value then use the boolean header file

// this header file is use for the dynamic memeory allocation
struct node *root;
// we are firstly create the node for the tree
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *root;

struct node *create()
{
    int data;
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter -1 for no node !");
    printf("\nEnter the data :");
    scanf("%d", &data);

    // This is the base condition for the recurssive function if it is hit then the recursive part do not executed

    if (data == -1)
    {
        return 0; 
    }
    newnode->data = data;
    printf("\nEnter the left child node of %d :", data);
    newnode->left = create();

    // When the base condition will hit then the following part will executed as we know that the after recurssive function the copy of the all lines of code will create in every call ..
    // as the first call hits the base case then following code wil executed

    printf("\nEnter the right child node of the %d :", data);
    newnode->right = create();
    return newnode;
}

int inorder(struct node *root)
{

    if (root == NULL)
    {
        return 0;
    }
    // we print the data as left then root and finally right node of the tree
    inorder(root->left);
    printf("%d --> ", root->data);
    inorder(root->right);
}

int preorder(struct node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    // here we print the root node first then left node and  then right node of the  root by using the recursion
    // we use the head recursion

    printf("%d --> ", root->data);
    preorder(root->left);
    preorder(root->right);
}

// in postorder call we are fistly left - right - root node prints here we use the tail recursion
int postorder(struct node *root)
{
    // base condition for the recurssive calling function
    if (root == NULL)
    {
        return 0;
    }

    postorder(root->left);

    postorder(root->right);
    printf("%d --> ", root->data);
}

int numNodes(struct node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        return 1 + numNodes(root->left) + numNodes(root->right); // 1 for root node
    }
}
int searchKey(struct node *root, int key)
{
    if (root == NULL)
    {
        printf("\nNode is not present !");
    }
    if (root->data == key)
    {
        printf("\nNode is present !");
    }
    return searchKey(root->left, key) || searchKey(root->right, key);
}

int fullNodes(struct node*root){
    if (root == NULL)
    {
        return 0;
    }
    if(root->left == NULL && root->right == NULL){
        return 0;
    }
return fullNodes(root->left) + fullNodes(root->right) + ((root->left != NULL) && (root->right != NULL ? 1 : 0)); // here we are used the ternary operator for condition if any one conditon is false then it will return 0 otherwise it will return 1.



}


int main()
{
    struct node *root;
    root = create();
    int key;

    printf("\nInorder nodes are :");
    inorder(root);

    // printf("\nPreorder nodes are :");
    // preorder(root);

    // printf("\nPostorder nodes are :");
    // postorder(root);
    // printf("\nEnter the key :\n");
    // scanf("%d ", &key);
    // printf("\nNumber of nodes :%d ", numNodes(root));
    // searchKey(root, key);
    printf("\nThe full nodes present in the tree are : %d", fullNodes(root));
    return 0;
}