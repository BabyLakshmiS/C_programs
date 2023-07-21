# include <stdio.h>
void reverse(char *str)
{
   if (*str)
   {
       reverse(str+1);
       printf("%c", *str);
   }
}
int main()
{
   char a[20];
   scanf("%s",&a);
   reverse(a);
   return 0;
}
