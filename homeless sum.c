#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int people[n];//array 1
    int house[n];//array 2
      for(int i=0; i<n; i++)
      {
          scanf("%d",&people[i]);//array 1 input
      }
        for(int i=0; i<n; i++)
          {
              scanf("%d",&house[i]);//array 2 input
          }
               int count = 0;//initialize
               for(int i=0; i<n; i++)
                {
               for(int j=0; j<n; j++)
               {
            if(people[i]<house[j])
               {
            count=count+1;
            break ;
               }}}
                printf("\n");
                printf("%d",count);
return 0;
}
