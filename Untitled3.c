#include<stdio.h>
int main()
{
int i,j,n,arr[1000];
{
scanf("%d",&n);
}
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(j=n-1,i=0;i<n/2;i++,j--)
{
int baby;
baby=arr[i];
arr[i]=arr[j];
arr[j]=baby;
}
for(i=0;i<n;i++)
{
printf("%d",arr[i]);
}
}
