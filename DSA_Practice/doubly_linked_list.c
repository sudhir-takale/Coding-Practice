#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next, *prev;
};
struct node*insertAtEnd(){
    struct node*start;
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    // int data;
    // printf("\nEnter the data to the node-->");
    // scanf("%d",&temp->data);
    struct node*ptr;
    start=ptr;
    while (ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    temp->data=60;
    ptr->next=temp;
    temp->prev=ptr;
    ptr->next=NULL;

    



}
struct node *start;

int main()
{
    struct node *one = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));
    //  struct node *fifth=(struct node*)malloc(sizeof(struct node));
    one = start;
    one->next = second;
    one->prev = NULL;
    second->next = third;
    second->prev = one;
    third->next = fourth;
    third->prev = second;
    fourth->next = NULL;
    fourth->prev = third;
    
    printf("Enter the data to the Node :\n");
    scanf("%d", &one->data);
    printf("Enter the data to the Node :\n");
    scanf("%d", &second->data);
    printf("Enter the data to the Node :\n");
    scanf("%d", &third->data);
    printf("Enter the data to the Node :\n");
    scanf("%d", &fourth->data);
     
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->data = 648; //inserted the new node inthe beginning of the linked list;
    new->next = start;
    start->prev = new;
    start = new;
    struct node*p;
    p=start;
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=99;
    newnode->next=NULL;
    newnode->prev=NULL;
    while (p->next!=NULL)
    {
        p=p->next;
    }
    p->next=newnode;
    newnode->prev=p;
    // insertAtEnd();


    struct node *ptr;
    ptr = start;
    while (ptr != NULL)
    {
        printf("%d--->", ptr->data);
        ptr = ptr->next;
    }

    return 0;
}