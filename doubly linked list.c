#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void insertfront();
void insertend();
void insertmid();
struct node
{
    int data;
    struct node *next;
    struct node *prev;
}*newnode,*head,*temp;
int main()
{
    int option;
    while(1)
    {
        printf("\n\n***DOUBLY LINKED LIST***\n\n");
        printf("1.create\n");
        printf("2.display\n");
        printf("3.insert at front\n");
        printf("4.insert at end\n");
        printf("5.insert at mid\n");
        printf("6.EXIT\n");
        printf("Enter your choice ( 1 2 3 4 5 6 ): ");
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
             printf("enter the elements : ");
            for(i=0;i<n;i++)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        newnode->prev=NULL;
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            newnode->prev=temp;
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
        head->prev=newnode;
        head=newnode;
        }

        void insertend()
        {
            newnode=(struct node *)malloc(sizeof(struct node));
            scanf("%d",&newnode->data);
            newnode->next=NULL;
            temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=newnode;
        }

        void insertmid()
        {
            int pos,i;
            scanf("%d",&pos);
            newnode=(struct node *)malloc(sizeof(struct node));
            scanf("%d",&newnode->data);
            temp=head;
            for(i=1;i<pos;i++)
            {
               temp=temp->next;
            }
            temp->next=newnode;
            newnode->next=temp->next;
            newnode->prev=temp;
            temp->next->prev=newnode;
            //newnode->prev=temp;
        }
