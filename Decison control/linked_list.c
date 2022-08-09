#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    int *next;
};
void create_list(int n);
void traverse();

int main()
{   struct node *head;
    int n;
    printf("enter number of the nodes");
    scanf("d", &n);
    create_list(n);
    printf("data in the list");
    traverse();
    return 0;
}
void create_list(int n)
{  
    struct node *newnode, *temp;
    int data, i;
    head = (struct node *)malloc(sizeof(struct node));
    if (head == NULL)
    {
        printf("unable to allocate the memory");
        exit(0);
    }
    printf("enter the data of the node 1");
    scanf("%d", &data);
    head->data = data;
    head->next = NULL;
    temp = head;
    for (int i = 2; i <= n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        if (newnode == NULL)
        {
            printf("\nUnable to allocate the memory");
            break;
        }
        printf("ente the data to  node %d", i);
        scanf("%d", &data);
        temp->next = newnode;
        temp = temp->next;
    }
}
//from, here we are going to dispaly the entire list
void traverse()
{
    struct node *temp;
    if (head == NULL)
    {
        printf("list is empty");
        return;
    }
    temp = head;
    while (temp != NULL)
    {
        printf("The element is %d\n",temp->data);
        temp = temp->next;
    }
}