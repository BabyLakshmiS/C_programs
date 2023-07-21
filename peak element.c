#include<stdio.h>
int main()
{
    int num,i,j;
    scanf("%d",&num);
    int arr[num];
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<num;i++)
    {
        for(j=i+1;j<num;j++)
        {
          if(arr[i]>arr[j])
          {
             printf("%d",arr[i]);
          }
        }
}
return 0;
}
