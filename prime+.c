 #include<stdio.h>
 int prime(int b);
 int main()
 {
   int i,j,n,a,c,k=0,count=0,arr[100],sum;
   printf("enter a number");
   scanf("%d",&n);
   for(i=2;i<n;i++)
   {
     a=1;
     for(j=2;j<=n/2;j++)
     {
       if(i%j==0)
       a=0;
     }
     if(a==1)
     {
       arr[k]=i;
       k++;
     }
   }
   for(i=0;i<k;i++)
   {
     sum=sum+arr[i];
     c=prime(sum);
     if(c==1)
     count++;
   }
   printf("%d",count);
   return 0;
 }
 int prime(int b)
 {
   int j,a;a=1;
   for(j=2;j<=b/2;j++)
   {
     if(b%j==0)
     a=0;
   }

 }
