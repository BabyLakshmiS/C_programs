 #include<stdio.h>
 int main()
 {
   int i,j,k,n,alphabet=65,num=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
     for(j=0;j<i-1;j++)
     printf(" ");
   }
   for(k=0;k<2*i+1;k++)
   {
     if(i==n)
       printf("%c",alphabet + num++);
     {
       if(k==0 || k==2*i)
       {
         printf("%c",alphabet + num++);
       }
       else
       {
         printf(" ");
       }
     }
     printf("\n");
   }
   return 0;
 }
