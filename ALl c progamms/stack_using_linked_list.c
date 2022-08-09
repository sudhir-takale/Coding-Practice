// implement a stack using the linked list

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *top;

void push()
{
    int data;
    printf("\nEnter the data which you want to store in the list:\n");

    scanf("%d", &data);

    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));

    temp->data = data;
    temp->next = top;
    top = temp;
    printf("\nnode inserted !");
}

int pop()
{

    if (top == NULL) // empty condition if the linked list is empty..
    {
        return 0;
    }

    struct node *temp = top;
    temp = top->data;

    top = top->next;
    printf("\nthe popped node is: %d ", temp);
}

int printNodes()
{

    if (top == NULL)
    {
        return -1;
    }

    struct node *temp = top;
    while (temp != NULL)
    {
        printf("%d -->", temp->data);
        temp = temp->next;
    }
}
int peek()
{
    if (top == NULL)
    {
        return -1;
    }
    printf("\nthe topmost/peek is : %d ", top->data);
}

int main()
{

    int ch;
    while (ch != -1)
    {
        printf("\n1 for push \n 2 for pop \n3 for peek \n4 for disply \n5 for exit");
        printf("\nenter your choice :\n");
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
            printNodes();
            break;
        // case 5:
        //     exit();
        default:
            printf("\nPlease check your choice !");
            break;
        }
    }

    return 0;
}