#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head=NULL,*temp,*newnode;
int main()
{
    int n,i;
    printf("enter size of the node :");
    scanf("%d",&n);
    for(i=0;i<n;i++)

    {
        newnode=(struct node*)malloc(sizeof(struct node));
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
                temp=temp->next;
            }
    }
    printf("the values are :");
    temp=head;
    while(temp!=NULL)
          {
              printf(" %d",temp->data);
              temp=temp->next;
          }
          return 0;
}
