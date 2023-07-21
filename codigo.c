#include<stdio.h>
int main()
{
    int t,n,i,j,k,a;
    scanf("%d",&t);
    scanf("%d",&n);
    {
    int stime[n];
    for(i=0;i<n;i++)
    {
     scanf("%d",&stime[i]);
    }
    int duration[n];
    for(j=0;j<n;j++)
    {
        scanf("%d",&duration[j]);
    }
    int price[n];
    for(k=0;k<n;k++)
    {
        scanf("%d",&price[k]);
    }
    if(stime[i] < duration[j])
    {
        a=price[k]+price[k];
        printf("%d",a);
    }
}
return 0;
}
