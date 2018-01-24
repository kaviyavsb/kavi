#include <stdio.h>
int main(void) {
	int a,n,power=1,i;
	scanf("%d %d",&a,&n);
	for(i=1;i<=n;i++)
	{
		power=power*a;
	}
	printf("%d",power);
	return 0;
}
