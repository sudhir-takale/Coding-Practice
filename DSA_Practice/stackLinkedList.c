#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *top = NULL;

void displyStack()
{
    if (top == NULL)
    {
        printf("\nYour stack is already empty !");
    }
    struct node *p;
    while (p != NULL)
    {
        printf("%d --->", p->data);
        p = p->next;
    }
}

void enqueue()
{

    struct node *new;
    int data;
    new = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the value of input :\n");
    scanf("%d", &data);
    new->data = data;
    new->next = NULL;
    // if (top == NULL)
    // {
    //     top->next = new;
    //     top = new;
    // }

    new->next = top;
    top = new;
}

void pop()
{
    if (top == NULL)
    {
        printf("\nyour stack is empty !");
    }
    struct node *tmp = top;
    int x = top->data;
    printf("\npopped element is : %d", x);
    top = tmp->next;
    free(tmp);
}

void peek()
{
    if (top == NULL)
    {
        printf("\nyour top is :NULL");
    }
    printf("\nyour peek element is: %d", top->data);
}

int main()
{
   
    int ch;
    
    while(ch != -1){
        printf("\nenter your choice:\n");
        scanf("%d", &ch);
        printf("\nwhat you want to do :");

        switch (ch)
        {
        case 1:
            enqueue();
            break;
        case 2:
            pop();
            break;
        case 3:
            displyStack();
            break;
        default:
            break;
    }
    }
    return 0;
}