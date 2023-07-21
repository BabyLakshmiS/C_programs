#include<stdio.h>
#include<stdlib.h>
void enqueue();
void dequeue();
void display();
void peek();
struct node
{
    int data;
    struct node *next;
}*newnode,*temp,*front=NULL,*rear=NULL;
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
    int n,i;
    printf("enter the size: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(front==NULL&&rear==NULL)
        {
            front=rear=newnode;
        }
        else
        {
            rear->next=newnode;
            rear=newnode;
        }
    }
}
void dequeue()
{
    temp=front;
    if(front==NULL&&rear==NULL)
    {
        printf("queue is empty");
    }
    else
    {
        printf("%d\n",front->data);
        front=front->next;
        free(temp);
    }
}
void display()
{
    if(front==NULL&&rear==NULL)
    {
        printf("queue is empty\n");
    }
    else
    {
        temp=front;
        while(temp!=NULL)
        {
            printf("%d\n",temp->data);
            temp=temp->next;
        }
    }
}
void peek()
{
    if(front==NULL)
    {
        printf("queue is empty.");
    }
    else
    {
        printf("%d\n",front->data);
    }
}

