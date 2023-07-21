#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void count();
void reverse();
struct node
{
    int data;
    struct node *next;
}*newnode,*head,*temp,*tail,*prev,*current;
int main()
{
    int option,pos;
    while(1)
    {
        printf("\n\nSINGLY LINKED LIST\n\n");
        printf("1.create\n");
        printf("2.display\n");
        printf("3.count the elements\n");
        printf("4.reverse the elements\n");
        printf("Enter your choice ( 1 2 3 4 ): ");
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
            count();
            break;
        case 4:
            reverse();
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
void count()
{
    int c=0;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
        c++;
    }
    printf("\n%d",c);
}
void reverse()
{
    while(temp!=NULL)
    {
        next=temp->next;
        temp->next=prev;
        prev=temp;
        temp=next;
    }

}
