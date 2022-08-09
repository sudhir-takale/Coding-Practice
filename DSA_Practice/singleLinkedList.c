#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head;

void insertAtHead()
{

    int data;
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the data of node \n");
    scanf("%d", &newnode->data);
    if (newnode->next == NULL)
    {
        newnode->data = data;
        newnode->next = NULL;
        head = newnode;
    }

    newnode->next = head;
    head = newnode;
}

void display()
{
    struct node *p = head;
    while (p != NULL)
    {
        printf("%d --> ", p->data);
        p = p->next;
    }
}
void insertAtEnd()
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    int data;
    printf("\nEnter the data to the node :\n");
    scanf("%d", &data);
    struct node *p = head;
    newnode->data = data;

    while (p->next != NULL)
    {
        p = p->next;
    }

    p->next = newnode;
    newnode->next = NULL;
}
void insertAtLoc()
{
    int data, loc;
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;

    printf("\nEnter the data :\n");
    scanf("%d", &newnode->data);
    printf("\nEnter the location where you want to add the newnode :\n");

    scanf("%d", &loc);
    for (int i = 1; i < loc; i++)
    {
        p = p->next;
    }
    newnode->next = p->next;
    p->next = newnode;
}

int main()
{
    insertAtHead();
    insertAtHead();
    insertAtHead();
    display();
    insertAtEnd();
    display();
    insertAtEnd();
    display();
    insertAtLoc();
    display();

    return 0;
}