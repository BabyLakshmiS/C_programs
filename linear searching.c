#include<stdio.h>
int main()
{
    int i,n,search,flag=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&search);
    for(i=0; i<n; i++)
    {
        if(search==arr[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("search found");
    }
    else
    {
        printf("search not found");
    }
}
