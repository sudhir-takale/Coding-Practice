#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *front = NULL;
struct node *rear = NULL;

void enqueue()
{
    int n;
    printf("\nenter the value");
    scanf("%d", &n);

    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = n;
    newnode->next = NULL;
    if (front == NULL && rear == NULL)
    {
        front = rear = newnode;
    }
    else{
    rear->next = newnode;
    rear = newnode;
    }
}

void dequeue()
{

    if (rear == NULL && front == NULL)
    {
        printf("\nyour list is empty\n");
    }
    else{
    struct node *temp;
    temp = front;
    printf("\n the deleted node is :%d", front->data);

    front = front->next;
    free(temp);
    }
}

void peek()
{
    if (rear == NULL && front == NULL)
    {
        printf("\nyour list is empty\n");
        printf("\nthe peek is at :  0" );
    }
    else{
    printf("\nyour front peek is at : %d", front->data);
    printf("\nyour rear peek is at : %d", rear->data);
    }
}

void display()
{
    struct node *temp;

    if (rear == NULL && front == NULL)
    {
        printf("\nnothing in the list !");
    }
    else{
    temp = front;
    while (temp)
    {  int x = temp->data;
        printf("%d --->", x);
        temp = temp->next;
    }
    }
}
int main()
{

    int ch;
    do
    {

        printf("\n 1 for Push \n 2 for Pop \n 3 for Peek \n 4 for disaplay");
        printf("\nEnter the your choice :\n");
        scanf("%d", &ch);

        switch (ch)
        {

        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;

        default:
            printf("\nPlease check your choice !");
            break;
        }
    } while (ch != 0);

    return 0;
}