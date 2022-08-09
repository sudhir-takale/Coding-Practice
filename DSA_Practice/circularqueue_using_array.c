#include <stdio.h>
#define n 10
int queue[n];
int front = -1;
int rear = -1;

void enqueue()
{
    int x;
    printf("\nEnter the value of the number :\n");
    scanf("%d", &x);
    if (front == -1 && rear == -1)
    {
        front = front + 1;
        rear = rear + 1;

        queue[rear] = x;
    }

    else if ((rear + 1 % n) == front)
    {
        printf("your queue is full");
    }
    else
    {
        rear = (rear + 1 % n);
        queue[rear] = x;
    }
}
void dequeue()
{
    if (rear == -1 && front == -1)
    {
        printf("\nyour list is already empty\n");
    }
    else if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        printf("\nthe deleted element is :%d", queue[front]);
        front = (front + 1) % n;
    }
}
void peek()
{
    if (front == -1 && rear == -1)
    {
        printf("\nyour list is empty\n");
    }
    else
    {
        printf("\nYour front element is :%d", queue[front]);
        printf("\nYour rear element is :%d", queue[rear]);
    }
}

void display()
{
    if (front == -1 && rear == -1)
    {
        printf("\nyour list is empty !");
    }
    else
    {
        int i ;
        while ( i != rear)
        {
            printf("%d  ", queue[i]);
            i = (i + 1) % n;
        }
    }
}


int main()
{

    int ch;

    do
    {

        printf("\n 1 for Enqueue \n 2 for Dequeue \n 3 for Peek \n 4 for disaplay");
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
