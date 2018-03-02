#include<stdio.h>
int main()
{
   int a,n,i,count=0;
   scanf("%d %d",&a,&n);
   for(i=1;i<=n;i++)
   {
       if(a%i==0)
       ++count;
   }
   if(count>2)
   printf("yes...composite");
   else
   printf("no");
   return 0;
}
