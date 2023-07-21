#include<stdio.h>;
int main()
{
    int i, n=10,search,flag;
    int arr[]= {4,3,7,8,9,11,14,17,21,29};
    scanf("%d",&search);
    for(i=0; i<n; i++)
    {
        if(arr[i]==search)
            flag=1;
    }
    if(flag==1)
        printf("search found");
    else
        printf("search not found");
}
