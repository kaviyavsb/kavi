#include <stdio.h>
int main(void) {
	int n,remainder,count=0,n1;
	scanf("%d",&n);
	n1=n;
	while(n1!=0)
	{
		remainder=n1%10;
		++count;
		n1=n1/10;
	}
	printf("%d",count);
	return 0;
}
