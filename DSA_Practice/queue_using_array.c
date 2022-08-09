#include <stdio.h>
#define n 10

int queue[n];

int front = -1;
int rear = -1;
void enqueue()
{

    int x;
    printf("\nEnter the value of input :\n");
    scanf("%d", &x);

    if (rear == n - 1)
    {
        printf("\nQueue is full");
    }
    else if (front == -1 || rear == -1)
    {
        front++;
        rear = rear + 1;
        queue[rear] = x;
    }

    else
    {
        rear = rear + 1;
        queue[rear] = x;
    }
}

void dequeue()
{
    if (rear == -1 && front == -1)
    {
        printf("\n queue is empty :");
    }
    else if (front == rear)
    {

        rear = front = -1;
    }

    else
    {
        printf("\nthe deleted number is :%d", queue[front]);
        front++;
    }
}

void peek()
{
    printf("\nThe front element is  : %d", queue[front]);
    printf("\nThe back element is : %d", queue[rear]);
}

void display()
{
    if (rear == -1 && front == -1)
    {
        printf("\n queue is empty :");
    }

    else
    {
        for (int i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
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
