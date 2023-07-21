#include<stdio.h>
int main()
{
    int n,m,r,i,sum=0,sum1=0;
    scanf("%d",&n);
    int arr[n];
    scanf("%d",&m);
    int brr[m];
    scanf("%d",&r);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&brr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=arr[i]+sum;
    }

    for(i=0;i<n;i++)
    {
        sum1=brr[i]+sum1;
    }

    if(sum>sum1)
    {
        printf("%d",sum1-sum-r);
    }
    if(sum<sum1)
    {
        printf("%d",sum-sum1+r);
    }
    if(sum==sum1)
    {
        printf("EQUAL");
    }
    return 0;
}
