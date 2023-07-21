#include<stdio.h>
int main()
{
    int n,i=0;
    scanf("%d",&n);
    int arr[n];
    while(i!=n)
    {
        scanf("%d",&arr[i]);
        i++;
    }
    i=-1;
     while((n-1)!=i)
    {
        printf("%d",arr[n-1]);
        n--;
    }
    return 0;
}
