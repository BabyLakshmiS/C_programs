#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a;
    scanf("%d",&a);
    int *p;
    p=&a;
    int **q;
    q=&p;
    printf("%d\n%d\n%d",a,*p,**q);

}
//using function
/*
void fun(int *c,int *d)
{
    *c=5;
    *d=9;
    printf("%d\n%d",*c,*d);
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    fun(&a,&b);
    printf("\n%d\n%d",a,b);
}
*/
