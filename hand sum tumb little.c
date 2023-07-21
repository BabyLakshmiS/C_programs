#include<stdio.h>
int main()

{
    int n,rem,m;
    printf("enter the number\n");
    scanf("%d",&n);
    if(n%8==0)
    {
        printf("Index finger");
    }
    if(n<=5)
    {
        if(n==1)
        {
            printf("Tumb");
        }
        if(n==2)
        {
            printf("Index");
        }
        if(n==3)
        {
            printf("Middle");
        }
        if(n==4)
        {
            printf("Ring");
        }
        if(n==5)
        {
            printf("Little");
        }
    }
    if(n > 5)
    {
    rem=n%8;
    if(rem==1)
    {
        printf("Tumb");
    }
    if(rem==2)
    {
        printf("Index");
    }
    if(rem==3 || n==7)
    {
        printf("Middle");
    }
    if(rem==4 || n==6)
    {
        printf("Ring");
    }
    if(rem==5)
    {
        printf("Little");
    }
    }
    return 0;


}
