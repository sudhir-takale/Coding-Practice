#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head;

void create()
{
    printf("\n how are you ");

    int data;
    struct node *ptr;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the value to node :\n");
    scanf("%d", &data);
    temp->next = NULL;
    temp->data = data;

    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }

        ptr->next = temp;
    }
}

void printList(struct node *head)
{

    printf("\n how are you ");

    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d -->", ptr->data);
        ptr = ptr->next;
    }printf("\n");

}

void insertAtFirst(struct node *head, int data)
{
    printf("\n how are you ");

    struct node *tmp;
    struct node *ptr = head;
    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->data = data;
    if (head == NULL)
    {
        head = tmp;
    }

    else
    {

        tmp->next = head;
        head = tmp;
    }
}
void insertAtEnd(struct node *head, int data)
{
    printf("\n how are you ");

    struct node *tmp = (struct node *)malloc(sizeof(struct node));
    struct node *ptr = head;
    ptr->data = data;

    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = tmp;
    tmp->next = NULL;
}

// void insertAtLoc(struct node*head, int data){

// struct node*tmp, ptr = head;
// tmp = (struct node*)malloc(sizeof(struct node));
// tmp->data = data;

// for (int  i = 0; i < loc; i++)
// {
//     ptr = ptr->next;
// }
// }

int main()
{

    create();
    create();
    create();
    create();
    printList(head);
    insertAtEnd(head, 2345);
    insertAtEnd(head, 345);
    printList(head);
    insertAtFirst(head, 456);
    insertAtFirst(head, 2434);
    printList(head);

    return 0;
}