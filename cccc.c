#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,j,k,sum=9;
    {
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<=n; j++)
            {
                for(k=j+1; k<=n; k++)
                {
                    if(arr[i]+arr[j]+arr[k]==sum)
                    {
                        printf("%d %d %d",arr[i],arr[j],arr[k]);
                    }
                }
            }
        }

        return 0;
    }










}
