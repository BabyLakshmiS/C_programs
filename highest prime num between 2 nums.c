#include<stdio.h>
int main()
{
    int a,b,i,m,j,n,flag=0;
    scanf("%d\n%d",&a,&b);
    for(i=a; i<b; i++)
    {
        m=i/2;
        for(j=2; j<=m; j++)
        {
            if(n%i==0)
            {
                printf("%d  is not a prime number\n",i);
                flag=1;
                //break;
            }
        }
            if(flag==0)
                printf("%d  is prime number\n",i);

    }
    return 0;
}
