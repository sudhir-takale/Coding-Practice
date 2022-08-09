#include<stdio.h>
#define n 10
int rear = -1;
int front = -1;
int queue[n];

void enqueue(){
    int data;
    printf("\nEnter the input :\n");
    scanf("%d",&data);

if ((rear + 1)%n ==front)
{
    printf("\nyour queue is full ");

}
if (front == -1)
{
    front = front + 1;
}
rear = (rear + 1) % n ;
queue[rear] = data;

}

void dequeue(){
    if (front == -1)
    {
        printf("\nfull");
    }
    int data = queue[front];
    if (front == rear)
    {
        front = -1;
        rear  = -1;
    }
    
    else{
        front = (front + 1) % n;
    }
    printf("\nthe deleted element is %d :",data);
}



void peek(){
    if (front == -1 && rear == -1)
    {
        printf("\nempty ");
    }
    printf("\nfront element is %d :",queue[front]);
}

void display(){
    
    if (rear == -1 && front == -1)
    {
        printf("\nyour list is empty");
    }
    
    else{
        for (int i = rear; i < front; i++)
        {
            printf("%d",queue[i]) ;
        }
        
    }
}
int main(){
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