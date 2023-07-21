#include<stdio.h>
int main()
{
    int n=10,search=1,first,mid,last;
    int arr[]= {1,2,3,4,5,6,7,8,9,10};
    first=0;
    mid=first+last/2;
    last=n-1;
    {
        while(first>=last)
        {
            mid=first+last/2;
        }
        if(search>arr[mid])
        {
            first=mid+1;
        }
        if(search==arr[mid])
        {
            printf("search found");
        }
        else
        {

            last=mid-1;
            printf("Not found");
        }
    }

    return 0;

}
