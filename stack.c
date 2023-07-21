#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
void peek();
struct node
{
    int data;
    struct node *next;
}*top=NULL,*newnode,*temp;
int main()
{
    int option;
    while(1)
    {
        printf("***STACK PROGRAM***\n");
        printf("1.enter for push\n");
        printf("2.enter for pop\n");
        printf("3.enter for display\n");
        printf("4.enter for peek\n");
        scanf("%d",&option);
        switch(option)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
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
void push()
{
    int n,i;
    printf("enter the size: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(top==NULL)
        {
            top=newnode;
        }
        else
        {
            newnode->next=top;
            top=newnode;
        }
        temp=newnode;
    }
}
void pop()
{
    temp=top;
    if(top==NULL)
    {
        printf("stack is empty");
    }
    else
    {
        printf("%d\n",top->data);
        top=top->next;
        free(temp);
    }
}
void display()
{
    temp=top;
    if(top==NULL)
    {
        printf("stack is empty\n");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("%d\n",temp->data);
            temp=temp->next;
        }
    }
}
void peek()
{
    if(top==NULL)
    {
        printf("stack is empty.");
    }
    else
    {
        printf("%d\n",top->data);
    }
}
