#include<stdio.h>
int main()
{
    int i,j,num;
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        for(j=i;j<num;j++)
        {
            printf("1");
        }
        printf("\n");
    }
    if(i%2==0)
    {
        printf("0");
    }
    return 0;

}
