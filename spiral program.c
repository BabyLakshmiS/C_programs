#include<stdio.h>
int main()
{
    int i,j,n,count=1;
    scanf("%d",&n);
    int a[n][n];
    int c_min=1,c_max=n,r_min=1,r_max=n;
    while(r_min<=r_max)
    {
        for(i=c_min;i<=c_max;i++)
            a[r_min][i]=count++;
        for(i=r_min+1;i<=r_max;i++)
            a[i][c_max]=count++;
        for(i=c_max-1;i>=c_min;i--)
            a[r_max][i]=count++;
        for(i=r_max-1;i>=r_min;i--)
            a[i][c_min]=count++;
        r_min++;c_min++;r_max--;c_max--;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
