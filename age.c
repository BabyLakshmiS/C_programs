#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter vijay age  ");
    scanf("%d",&a);
    printf("Enter ranjith age  ");
    scanf("%d",&b);
    if(a>b)
    {
        printf("vijay is older than ranjith");
    }
    if(a<b)
    {
        printf("ranjith is older than vijay");
    }
    else
    {
        printf("Both have equal age");
    }

}
