#include<stdio.h>
int main()
{
    int n,i,j,temp;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
        if(arr[i]>arr[j])
        {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n%d%d",arr[0],arr[1]);
}
