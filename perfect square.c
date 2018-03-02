#include<stdio.h>
int main()
{
   int a,b,mul,i,count=0;
   scanf("%d %d",&a,&b);
   mul=a*b;
   for(i=1;i<=mul;i++)
   {
       if(mul==(i*i))
       ++count;
   }
   if(count>0)
   printf("yes");
   else
   printf("no");
   return 0;
}
