#include<stdio.h>
int main()
{
    int n1,n2,sum;
    printf("enter n1 and n2\n");
    scanf("%d%d",&n1,&n2);
    sum=count( n1, n2);
    printf("the sum of n1 and n2\n");
    printf("%d",sum);
}
int count(int n1,int n2)
{
    int n3;
    n3=n1+n2;
    return(n3);
}
