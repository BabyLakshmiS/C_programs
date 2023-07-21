#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,j,count=0;
    printf("enter string \n");
    char str [100];
    scanf("%[^\n]s",&str);
    n = strlen(str);
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
        if(str[i]==str[j])
        {
            count++;
        }
        }
        printf("%d of %c  \n",count,str[i]);
   // printf(" %c",str[]);
    }
   // printf("%d",count);
   // printf(" %c",str[0]);
}
