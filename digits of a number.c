#include<stdio.h>
int main(void)
{
	int n,a,remainder,count=0;
	scanf("%d",&a);
	n=a;
	while(n!=0)
	{
		remainder=n%10;
		++count;
		n=n/10;
	}
	printf("%d",count);
	return 0;
}
