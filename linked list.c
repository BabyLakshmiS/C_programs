#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void insertfront();
void insertend();
void insertmid();
void deletefront();
void deleteend();
void deletemid();
void exit();
struct node
{
    int data;
    struct node *next;
}*newnode,*head,*temp,*prev;
int main()
{
    int option,pos;
    while(1)
    {
        printf("\n\n***SINGLY LINKED LIST***\n\n");
        printf("1.create\n");
        printf("2.display\n");
        printf("3.insert at front\n");
        printf("4.insert at end\n");
        printf("5.insert at mid\n");
        printf("6.delete at front\n");
        printf("7.delete at end\n");
        printf("8.delete at mid\n");
        printf("9.exit\n");
        printf("Enter your choice ( 1 2 3 4 5 6 7 8 9): ");
        scanf("%d",&option);
        switch(option)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            insertfront();
            break;
        case 4:
            insertend();
            break;
        case 5:
            insertmid();
            break;
        case 6:
            deletefront();
            break;
        case 7:
            deleteend();
            break;
        case 8:
            deletemid();
            break;
        case 9:
            exit(0);
            break;
        }
    }
}
void create()
{
    int n,i,c=0;
    printf("enter the size ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }
}
void display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}
void insertfront()
{
    newnode=(struct node *)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;
}
void insertend()
{
    newnode=(struct node *)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    temp=head;
    while(temp->next != NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
}
void insertmid()
{
    int pos,j;
    scanf("%d",&pos);
    newnode=(struct node *)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    temp=head;
    for(j=1; j<pos; j++)
    {
        temp=temp->next;
        newnode->next=temp->next;
        temp->next=newnode;
    }
}
void deletefront()
{
  temp=head;
  head=head->next;
  free(temp);
}
void deleteend()
{
    temp=head;
    while(temp->next!=NULL)
    {
        prev=temp;
        temp=temp->next;
        if(temp==head)
        {
            head=NULL;
        }
        else
        {
            prev->next=NULL;
        }
        free(temp);
    }
}
void deletemid()
{
    int pos,j;
    scanf("%d",&pos);
    temp=head;
    for(j=1; j<pos-1; j++)
    {
        temp=temp->next;
    }
    temp->next = temp->next->next;
    free(temp);
}
