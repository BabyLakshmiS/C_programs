#include<stdio.h>
int main()
{
    int n,i,j,sum;
    printf("enter array size\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter array elements \n");
    for(i=0;i<n;i++)
    {
        scanf("%d ",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\nenter target value\n");
    scanf("%d",&sum);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(sum==arr[i]+arr[j])
            {
              printf("%d+%d\n",arr[i],arr[j]);
        }
        }
    }
}
