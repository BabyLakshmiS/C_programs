#include<stdio.h>
int main()
{
    int n,i,c,a=1,b=1;
    scanf("%d",&n);
    printf("\n%d %d",a,b);
    for(i=2; i<n; ++i)
    {
        c=a+b;
        printf(" %d",c);
        a=b;
        b=c;
    }
    printf("\n%d",c);
}
