#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head,*temp,*tail,*newnode,*temp2;
int main()
{
    int num;
    while(1)
    {
        printf("\n 1.CREATE  \n 2.INSERTION_FRONT \n 3.DELETION_FRONT \n 4.DISPLAY \n 5.INSERTION_AT_END \n 6.DELETION_AT_END \n 7.INSERT_MID \n 8.DELETE_MID \n 9.REVERSE\n 10.EXIT ");
        scanf("%d",&num);
        switch(num)
        {
        case 1:
            create();
            break;
        case 2:
            insertion_at_front();
            break;
        case 3:
            deletion_at_front();
            break;
        case 4:
            display();
            break;
        case 5:
            insertion_at_end();
            break;
        case 6:
            deletion_in_end();
            break;
        case 7:
            insert_mid();
            break;
        case 8:
            delete_mid();
            break;
        case 9:
            reverse();
            break;
        case 10:
            exit(1);
        }
    }
}
int create()
{
    int n;
    printf("\n Enter the number of elements  : ");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
       struct node *newnode=(struct node*)malloc(sizeof(struct node));
        printf("\n Enter the element : ");
        scanf("%d",&newnode->data);
        newnode->next = NULL;
        if(head == NULL)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }
    tail=temp;
    tail->next=head;
}

int display()
{
    temp=head;
    while(temp->next!=head)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);
}

int insertion_at_front()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\n Enter the element : ");
    scanf("%d",&newnode->data);
    tail->next=newnode;
    newnode->next = head;
    head = newnode;
}

int deletion_at_front()
{
    temp=tail->next;
    tail->next=tail->next->next;
    head=head->next;
    free(temp);
}
int insertion_at_end()
{
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter element :");
    scanf("%d",&newnode->data);
    tail->next=newnode;
    newnode->next=head;
    tail=newnode->next;
}
int deletion_in_end()
{
    temp=head;
    while(temp->next!=tail)
    {
        temp=temp->next;
    }
    temp->next=head;
    free(tail);
    tail=temp;
}
int insert_mid()
{
    int pos;
    printf("\nEnter the position : ");
    scanf("%d",&pos);
    temp=head;
    for(int i=1; i<pos-1; i++)
    {
        temp=temp->next;
    }
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter element : ");
    scanf("%d",&newnode->data);
    newnode->next=temp->next;
    temp->next=newnode;
}
int delete_mid()
{
    int pos;
    printf("\nEnter the position : ");
    scanf("%d",&pos);
    temp=head;
    for(int i=1; i<pos-1; i++)
    {
        temp=temp->next;
    }
    temp2 = temp->next;
    temp->next=temp->next->next;
    free(temp2);
}
int reverse()
{
    struct node *prevNode, *curNode;

 /*   if(head != NULL)
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

        printf("list reversed \n");
    }

}




