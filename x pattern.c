#include<stdio.h>
int main()
{
    int  row,col,num;
    printf("enter the value:");
    scanf("%d",&num);
    for(row=1; row<=num; row++)
    {
        for(col=1; col<=num; col++)
        {
            if(row==1 || row==num || col==1 || col==num || row==col || row+col==num+1)
            {

                printf("*");
            }
            else
            {

                printf(" ");

            }
        }
        printf("\n");
    }
        return 0;
}
