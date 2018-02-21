#include <stdio.h>
int main(void) {
	int f=0,s=1,sum=0,n,i;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
	    sum=s+f;
	    printf("%d\n",sum);
	    s=f;
	    f=sum;
	 }
	return 0;
}
