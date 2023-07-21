#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a<b)
    {
        printf("%d largest number\n",b);
        printf("%d smallest number",a);
    }
    if(a==b)
    {
        printf("both numbers are equal");
    }
    else
    {
        printf("%d largest number\n",a);
        printf("%d smallest number",b);
    }
}
