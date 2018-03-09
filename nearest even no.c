#include <stdio.h>
int main()
{
   int no,i,count=0;
   scanf("%d",&no);
   for(i=no;i>=0;i--)
   {
       if(i%2==0)
       ++count;
       if(count==1)
       {
       printf("%d",i);
       break;
       }
   }
return 0;
}
