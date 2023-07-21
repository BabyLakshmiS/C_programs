#include<stdio.h>
int main()
{
    int t,e,m,s,ss;
    scanf("%d %d %d %d %d",&t,&e,&m,&s,&ss);
    printf("%d%d%d%d%d",t,e,m,s,ss);
    int total=t+e+m+s+ss;
    printf("\n%d total ",total);
    int avg=total/5;
    printf("\n%d average value ",avg);
}
