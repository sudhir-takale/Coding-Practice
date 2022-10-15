#include <iostream>
using namespace std;

class node
{

public:
    int data;
    node *left;
    node *right;

    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node *createTree(node *root)
{

    cout << "Enter the data for node" << endl;
    int data;
    cin >> data;

    root = new node(data);
    if (data == -1)
    {
        return NULL;
    }
    cout << "Enter the data for left child of the node  " << data << endl;
    root->left = createTree(root->left);
    cout << "Enter the data for right child of the node " << data << endl;
    root->right = createTree(root->right);
    return root;
}

void inorderTraversal(node *root)
{
    if (root == NULL)
        return;
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

int main()
{

    node *root = NULL;
    root = createTree(root);
    inorderTraversal(root);
    
    return 0;
}