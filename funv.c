#include<stdio.h>
int main()
{
    int n1,n2,sum;
    scanf("%d%d",&n1,&n2);
    sum=count( n1, n2);
    printf("%d",sum);
}
int count(int n1,int n2)
{
    int n3;
    n3=n1+n2;
    return(n3);
}
