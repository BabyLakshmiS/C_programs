#include<stdio.h>
int main()
{
    int num,sum=0,sum1=0,sub,i;
    scanf("%d",&num);
    int arr[num];
    for(i=0; i<num; i++)
    {
        scanf("%d",&arr[i]);
        sum1=sum1+arr[i];
    }
    printf("sum of array is ");
    printf("%d",sum1);
    for(i=1; i<=num; i++)
    {
        sum=sum+i;
    }
    printf("\n%d",sum);
    sub=sum-sum1;
    printf("\n%d",sub);
    return 0;
}
