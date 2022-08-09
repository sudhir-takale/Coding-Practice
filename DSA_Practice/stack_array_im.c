#include <stdio.h>
#define n 10

int top = -1;
int stack[n];

void push();
void pop();
void peek();
void display();

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

void push()
{

    int x;
    printf("\nEnter the value the input :\n");
    scanf("%d", &x);

    if (top == n - 1)
    {
        printf("\nThe stack is already full !");
    }
    top++;
    stack[top] = x; // this condition for storing the data
}

void pop()
{

    int item;

    if (top == -1)
    {
        printf("\nThe stack is empty !");
    }
    item = stack[top];
    top--;
    printf("\nPopped element is :%d", item);
}

void peek()
{

    if (top == -1)
    {
        printf("\nThe stack is empty");
    }
    printf("\nThe top is  : %d", stack[top]);
}
void display()
{
    if (top == -1)
    {
        printf("\nNothing to show !");
    }

    for (int i = top; i >= 0; i--)
    {
        printf("%d ", stack[i]);
    }
}