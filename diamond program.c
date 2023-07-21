#include<stdio.h>
int main()
{
int i, j, k, m, a = 1,b = 0,num;
scanf("%d",&num);
for(i = num;i > 0;i--)
 {
   for(j = i;j > 0;j--)
    {
       printf("*");
    }
for(k = 1;k < a;k++)
    {
       printf(" ");
    }
a = a + 2;
for(m = i;m > 0;m--)
    {
       printf("*");
    }
       printf("\n");
}
for(i = 1;i <= num-1;i++)
   {
      for(j = 0;j <= i;j++)
      {
        printf("*");
      }
for(k = num+1;k > b;k--)
      {
        printf(" ");
      }
b = b + 2;
for(m = 0;m <= i;m++)
{
printf("*");
}
printf("\n");
}
return 0;
}
