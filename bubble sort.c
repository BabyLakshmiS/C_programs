#include<stdio.h>
int main()
{
    int n,i,j,temp,k;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(j=0; j<n; j++)
    {
        printf("%d ",arr[j]);
    }

    printf("\n enter k value \n");

    scanf("%d",&k);

    printf("%d\n",arr[k-1]);

    return 0;
}
