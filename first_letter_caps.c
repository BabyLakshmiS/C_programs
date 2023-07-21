#include<stdio.h>
#include<string.h>
int main()
{
    int i,n;
    char str[100];
    printf("\n Enter the String \n");
    gets(str);
    n=strlen(str);
    for(i=0;i<n;i++)
    {
        if(str[i] == ' ')
        {
            str[i+1]=toupper(str[i+1]);
        }
        if(i==0)
        {
            str[i]=toupper(str[i]);
        }
    }
    puts(str);
}
