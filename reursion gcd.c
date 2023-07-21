#include<stdio.h>
#include<math.h>
int GCD(i,j);
int main()
{
   int a,b;
   printf("Enter the two integers: \n");
   scanf("%d%d",&a,&b);
   printf("%d,%d  gcd is %d",a,b,GCD(a,b));
   return 0;
}
int GCD(i,j)
{
   if(j>i)
      return GCD(j,i);
   if(j==0)
      return i;
   else
      return GCD(j,i%j);
}
