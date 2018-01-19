#include <stdio.h>
int main(void) {
      int a,n,i,count=0;
      scanf("%d %d",&a,&n);
      for(i=a;i<n;i++)
      {
      	if(i%10==0)
      {
      	++count;
      	printf("%d",i);
      	break;
       }
         
      }
      return 0;
}
