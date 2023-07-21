#include<stdio.h>
int main()
{
    int n,i,element,mid,mid1,a;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    if(n%2!=0)
    {
        mid=n/2;
        a=arr[mid];
        printf("\n%d",arr[mid]);
    }
    else
    {
        mid1=((n/2)+0.5);
        printf("\n%d",mid1+.5);
    }
}
