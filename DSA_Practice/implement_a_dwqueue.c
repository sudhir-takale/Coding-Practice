#include <stdio.h>
#define n 10

int deque[n];
int rear = -1;
int front = -1;

void enfront()
{
    int x;
    printf("\nEnter the input :");
    scanf("%d" ,&x);
    if ((front == rear + 1) || (front == 0 && rear == n - 1))
    {
        printf("\nyour queue is full !");
    }
    else if (front == -1 && rear == -1)
    {
        front = front + 1;
        rear = rear + 1;
        deque[front] = x;
    }
    else if (front == 0)
    {
        front = n - 1;
        deque[front] = x;
    }
    else
    {
        front--;
        deque[front] = x;
    }
}

void enrear()
{
    int x;
    printf("\nEnter the input :");
    scanf("%d",&x);
    if ((front == rear + 1) || (front == 0 && rear == n - 1))
    {
        printf("\nyour queue is full !");
    }
    else if (front == -1 && rear == -1)
    {
        front = front + 1;
        rear = rear + 1;
        deque[front] = x;
    }
    else if (rear == n - 1)
    {
        rear = 0;
        deque[rear] = x;
    }

    else
    {
        rear++;
        deque[rear] = x;
    }
}

void defront()
{
    if (front == 01 && rear == -1)
    {
        printf("\nnothing to delete !");
    }
    else if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else if (front == n - 1)
    {
        printf("\nthe deleted element is %d", deque[front]);

        front = 0;
    }

    else
    {
        printf("\nthe deleted element is %d", deque[front]);

        front++;
    }
}

void derear()
{
    if (front == -1 && rear == -1)
    {
        printf("\nnothing to delete");
    }
    else if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else if (rear == 0)
    {
        printf("\nthe deleted element is %d", deque[rear]);
        rear = n - 1;
    }
    else
    {
        printf("\nthe deleted element is %d", deque[rear]);

        rear--;
    }
}

void getpeek()
{
    if (front == -1 && rear == -1)
    {
        printf("your front is a :%d", deque[front]);
        printf("your rear is a :%d", deque[rear]);
    }
    else
    {
        printf("your front is a :%d", deque[front]);
        printf("your rear is a :%d", deque[rear]);
    }
}

void display()
{
    if (front == -1 && rear == -1)
    {
        printf("\nnothing to dispaly !");
    }
    else
    {
        int i = front;
        while (i != rear)
        {
            printf("%d ", deque[i]);
            i = (i + 1) % n;
        }
        printf("%d ", deque[rear]);
    }
}

int main()
{
    int ch;

    do
    {

        printf("\n1 for enfront \n2 for enrear \n3 for defront \n4 for derear \n5 for peek \n6 for display ");
        printf("\nwhat you want to do enter your choice :");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            enfront();
            break;
        case 2:
            enrear();
            break;
        case 3:
            defront();
            break;
        case 4:
            derear();
            break;
        case 5:
            getpeek();
            break;
        case 6:
            display();
            break;

        default:
            printf("\nplease check your choice !");
            break;
        }
    } while (ch != 0);

    return 0;
}