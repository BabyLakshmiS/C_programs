#include<stdio.h>
#define size 5
int stack[size];
int top=-1,element;
void push();
void pop();
void peek();
void display();
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
    if(top==size-1)
    {
        printf("stack is overflow\n");
    }
    else
    {
        printf("enter the elements\n");;
        scanf("%d",&element);
        top++;
        stack[top]=element;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("stack is underflow\n");
    }
    else
    {
  /*    element=stack[top];
        top--;
        printf("%d\n",element);*/
        printf("%d",stack[pop]);
        top--;
    }
}
void peek()
{
    printf("%d\n",stack[top]);
}
void display()
{
    int i;
    for(i=top;i>=0;i--)
    {
        printf("%d\n",stack[i]);
    }
}
