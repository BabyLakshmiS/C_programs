#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int people[n];
    int house[n];
      for(int i=0; i<n; i++)
      {
          scanf("%d",&people[i]);
      }
        for(int i=0; i<n; i++)
          {
              scanf("%d",&house[i]);
          }
               int count = 0;
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
                printf("%d",n-count);
return 0;
}
