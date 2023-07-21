#include<stdio.h>
int main()
{
 char a[100];
 scanf("%s",a);
 int i,j;
 {
  for(i=0;a[i]!='\0';i++)
  {
   for(j=0;j<=i;j++)
   {
    printf("%c",a[i]);
   }
   printf("\n");
  }
 }
return 0;



}
