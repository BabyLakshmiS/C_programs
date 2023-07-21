#include<stdio.h>
int main()
{
    int i,l=0;
    char str[100];
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        l++;
    }
    printf("%d",l);
}
