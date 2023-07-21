#include<stdio.h>
//void even();
int main()
{
    int n,i;
    scanf("%d",&n);
   // if(void even(n))
    //{
      //  printf("%d is a Even Number", n);
   // }
   // else
    //{
     //   printf("%d is an Odd Number", n);
    //}

    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    for(i=0;i<n;i++)
    {
    if(arr[i]%2==0)
    {
        printf("%d",arr[i]);
    }

    }
}

//void even()
//{
 //   return(n%2==0);
//}
