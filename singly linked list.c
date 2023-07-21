#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void count();
void search();
void oddeven_print();
void oddeven_sum();
void print_alternative();
void reverse();
void exit();
struct node
{
    int data;
    struct node *next;
}*newnode,*head,*temp,*prev,*current,*newhead;
int main()
{
    int option,pos;
    while(1)
    {
        printf("\n   SINGLY LINKED LIST    \n");
        printf("1.create\n");
        printf("2.display\n");
        printf("3.count the elements\n");
        printf("4.search the elements\n");
        printf("5.print the odd and even numbers\n");
        printf("6.print sum of odd and even numbers\n");
        printf("7.print the alternative nodes\n");
        printf("8.print reverse\n");
        printf("9.EXIT\n");
        printf("Enter your choice ( 1 2 3 4 5 6 7 8 9 ): ");
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
            search();
            break;
        case 5:
            oddeven_print();
            break;
        case 6:
            oddeven_sum();
            break;
        case 7:
            print_alternative();
            break;
        case 8:
            reverse();
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
        printf("%d ",temp->data);
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
void search()
{
    int search,flag=0;
    printf("enter search element ");
    scanf("%d",&search);
    temp=head;
    while(temp!=NULL)
    {
        if(temp->data==search)
        {
            flag=1;
        }
        temp=temp->next;
    }
    if(flag==1)
    {
        printf("search is found \n");
    }
    else
    {
        printf("search is not fount \n");
    }
}
void oddeven_print()
{
    temp=head;
    printf("even nodes are:\n");
    while(temp!=NULL)
    {
        if(temp->data%2==0)
        {
            printf("%d ",temp->data);
        }
        temp=temp->next;
    }
    temp=head;
    printf("\nodd nodes are:\n");
    while(temp!=NULL)
    {
        if(temp->data%2!=0)
        {
            printf("%d ",temp->data);
        }
        temp=temp->next;
    }
}
void oddeven_sum()
{
    int sum=0,sum1=0,i;
    temp=head;
    while(temp!=NULL)
    {
        if(temp->data%2==0)
        {
            sum=sum+temp->data;
        }
        if(temp->data%2!=0)
        {
            sum1=sum1+temp->data;;
        }
        temp=temp->next;
    }
    printf("odd nodes sum are:\n");
    printf("%d\n",sum1);
    printf("even nodes sum are:\n");
    printf("%d\n",sum);
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
void reverse()
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

        printf("SUCCESSFULLY REVERSED LIST\n");
    }
}


