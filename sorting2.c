#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of array \n");
    scanf("%d\n",&n);
    int arr[n],i,j,temp;
        for(i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }
        for(i=0; i<n; i++)
        {
            printf("%d",&arr[i]);
        }
            for(i=0; i<n; i++)
            {
                if(arr[i]>=arr[i+1])
                {
                    temp=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=temp;
                }
            //    printf("%d",arr[i]);
            }
                printf("%d  ",arr[i]);

     return 0;
}
