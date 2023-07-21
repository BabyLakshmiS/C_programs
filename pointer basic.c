#include<stdio.h>
#include<stdlib.h>

void main()
{
int x=5;
int *ptr;
ptr=&x;

printf("%d \n%d",ptr,*ptr);
}
