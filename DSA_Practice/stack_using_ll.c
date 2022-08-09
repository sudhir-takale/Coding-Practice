#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *top = NULL; // initially list is empty so there is no element present in list

void display()
{
    struct node *temp = top;
    if (top == NULL)
    {
        printf("\nUnderfolow condition");
    }
    else
    {
        while (temp != NULL)
        {
            printf("%d --> ", temp->data);
            temp = temp->next;
        }
    }
}

void peek()
{

    if (top == NULL)
    {
        printf("\n the list is empty");
    }
    else
    {
        printf("\nThe top most element is %d :", top->data);
    }
}

void pop()
{
    if (top == NULL)
    {
        printf("\nList is empty ");
    }
    else
    {
        struct node *temp = top;
        printf("\nPopped element id %d :", top->data);
        free(temp);
    }
}

void push()
{
    int x;
    printf("\nEnter the value of input :");
    scanf("%d", &x);

    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = top;
    top = newnode;
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
            push();
            break;
        case 2:
            pop();
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