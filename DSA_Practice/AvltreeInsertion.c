#include <stdio.h>
#include <stdlib.h>

struct node
{
    int key;
    struct node *left;
    struct node *right;
    int height;
};

int getHeight(struct node *n)
{
    if (n == NULL)
    {
        return 0;
    }
    return n->height;
}

struct node *createNode(int key)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->left = NULL;
    node->right = NULL;
    node.key = key;
    node->height = 1; // leaf node has always one node so its value is always one
    return node;
}

int getBalancefactor(struct node *n)
{
    if (n == NULL)
    {
        return 0;
    }
    return getBalancefactor(n->left->height) - getBalancefactor(n->right->height);
}

struct node *rightRotation(struct node *x)
{
    struct node *y;
    struct node *x = y->left;
    struct node *t2 = x->right;
    x->right = y;
    y->left = t2;

    y->height = max(getHeight(y->right), getHeight(y->left));
    x->height = max(getHeight(x->right), getHeight(x->left));

    return x;
}

struct node *leftRotation(struct node *x)
{
    struct node *y = x->right;
    struct node *t2 = y->left;

    y->left = x;
    x->right = t2;

    y->height = max(getHeight(y->right), getHeight(y->left));
    x->height = max(getHeight(x->right), getHeight(x->left));
    return y;
}

struct node *insert(struct node *node, int key)
{

    if (node == NULL)
    {
        return createNode(key);
    }

    if (key < node->key)
    {
        node->left = insert(node->left, key);
    }

    else if (key > node->key)
    {
        node->right = insert(node->right, key);
        return node;
    }
    node->height = 1 + max(getHeight(node->left), getHeight(node->right));
    int bf = getBalancefactor(node);

    // for RR rotation

    if (bf > 1 && key < node->left->key)
    {
        return rightRotation(node);
    }
    if (bf < 1 && key > node->right->key)
    {
        return leftRotation(node);
    }

    if (bf > 1 && key < node->left->key)
    {
        node->left = leftRotation(node->left);
        return rightRotation(node);
    }
    if (bf < 1 && key > node->right->key)
    {
        node->right = rightRotation(node->right);
        return leftRotation(node);
    }

    return node;
}

int max(int a, int b)
{
    return a > b ? a : b;
}

void preorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    printf("%d", &root->key);
    preorder(root->left);
    preorder(root->right);
}
int main()
{

    struct node *root = NULL;

    root = insert(root, 34);
    root = insert(root, 7);
    root = insert(root, 124);
    root = insert(root, 314);
    root = insert(root, 34);
    root = insert(root, 3);
    root = insert(root, 45);
    preorder(root);
    return 0;
}