#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*newnode,*head,*temp;
int main()
{
    int  n,i;
    printf("enter the size : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
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
    temp=head;

    {
           for(i=0;i<n;i++)
           {
               while(temp!=NULL)
             if(temp->data < newnode->data)
             {
               temp->next=newnode->next;
               newnode->next=newnode;
             }
           printf("%d",temp->data);
           temp=temp->next;
           }
    }
}


