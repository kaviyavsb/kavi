#include <stdio.h>
int main()
{
   int i,j,temp=0;
   scanf("%d %d",&i,&j);
   temp=i;
   i=j;
   j=temp;
   printf("i=%d,j= %d",i,j);
   return 0;
}
