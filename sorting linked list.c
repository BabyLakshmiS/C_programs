#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void sorting();


{
int num,i,j,temp,k;
scanf("%d",&num);
scanf("%d",&k);
int arr[num];
{
  for(i=0;i<=num;i++)
  {
  scanf("%d",arr[i]);
  }
  for(j=i+1;j<num;j++)
  {
  scanf("%d",arr[j]);
  }
  temp=arr[i];
  arr[i]=arr[j];
  arr[j]=temp;
  }
  printf("%d",arr[k]-1);
  return 0;

}
