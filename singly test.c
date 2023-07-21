#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void print_alternative();
void nth_node();
void temphead();
void exit();
struct node
{
    int data;
    struct node *next;
}*newnode,*head,*temp,*prev,*current,*newhead,*tail;
int main()
{
    int option,pos;
    while(1)
    {
        printf("\n   SINGLY LINKED LIST    \n");
        printf("1.create\n");
        printf("2.display\n");
        printf("3.print the alternative nodes\n");
        printf("4.print nth node\n");
        printf("5.print last to head\n");
        printf("Enter your choice ( 1 2 3 4 5 6): ");
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
            print_alternative();
            break;
        case 4:
            nth_node();
            break;
        case 5:
            temphead();
            break;
        case 6:
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
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
void print_alternative()
{
    temp=head;
    int temp1=0;
    while(temp!=NULL)
    {
        if(temp1%2==0)
        {
            printf("%d",temp->data);
        }
        temp1++;
        temp=temp->next;
    }
}
void nth_node()
{
    struct node *prevNode, *curNode;

    if(head != NULL)
    {
        prevNode = head;
        curNode = head->next;
        head = head->next;

        prevNode->next = NULL;

        while(head != NULL)
        {
            head = head->next;
            curNode->next = prevNode;

            prevNode = curNode;
            curNode = head;
        }

        head = prevNode;
    }
    int n,c=0;
    printf("enter n value\n");
    scanf("%d",&n);
    temp=head;
    while(temp!=NULL)
    {
        c++;
        temp=temp->next;
        if(c==n)
        {
            printf("%d",temp->data);
        }
   //     else
    //    {
    //        printf("%d",temp->data);
   //     }

    }
}
void temphead()
{
    if(temp==NULL)
       {
           temp=tail;
       }
    temp=head;
    tail=head;
    head=head->next;
    while(temp!=NULL)
    {
          printf("%d",temp->data);
          temp=temp->next;
}    }
