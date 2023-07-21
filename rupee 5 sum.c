#include<stdio.h>
int main()
{
    int n,i,balance1,balance2;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        printf("%d",arr[i]);
    }
    for(i=0; i<n-1; i++)
    {
        if(arr[i]>5)
        {
            arr[i]=0;
        }
    }
    if(arr[4]-5 == arr[0]+arr[1]+arr[2]+arr[3])
    {
        printf("\ntrue");
    }
    else
    {
        printf("\nfalse");
    }
    //printf("\n%d",);
}
