#include<stdio.h>
int main()
{
    int persons,total,i,handshake=0;
    printf("enter number of persons  \n");
    scanf("%d",&persons);
    for(i=1;i<=persons;i++)
    {
        handshake=handshake+i;
    }
  //  printf("%d",handshake);
    total=handshake-persons;
    printf("total handshake \n");
    printf("%d",total);
}
