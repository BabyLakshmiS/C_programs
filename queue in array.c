#include<stdio.h>
#define size 5
int queue[size];
int rear=-1,front=-1;
void enqueue();
void dequeue();
void peek();
void display();
int main()
{
    int option;
    while(1)
    {
        printf("***QUEUE PROGRAM***\n");
        printf("1.enter for enqueue\n");
        printf("2.enter for dequeue\n");
        printf("3.enter for display\n");
        printf("4.enter for peek\n");
        scanf("%d",&option);
        switch(option)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            peek();
            break;

        }
    }

}
void enqueue()
{
    int num;
    if(rear==size-1)
    {
        printf("queue is full!\n");
    }
    else if(front==-1&&rear==-1)
    {
        printf("enter the elements\n");
        front=0,rear=0;
        scanf("%d",&num);
        queue[rear]=num;
    }
    else
    {
        rear++;
        printf("enter the new elements\n");;
        scanf("%d",&num);
        queue[rear]=num;
    }
}
void dequeue()
{
    int num;
    if(front==-1&&rear==-1)
    {
        printf("queue is empty!\n");
    }
    else if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
        printf("the deleted element is %d\n",queue[front]);
        front++;
    }
}
void peek()
{
    printf("%d\n",queue[front]);
}
void display()
{
    int i;
    if(front==-1&&rear==-1)
    {
        printf("queue is empty");
    }
    else
        printf("the queue elements are\n ");
    {
        for(i=front; i<=rear; i++)
        {
            printf("%d\n",queue[i]);
        }
    }
}

