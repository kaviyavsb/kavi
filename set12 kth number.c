#include <stdio.h>
int main(void) {
	int k,a[4],i;
	scanf("%d",&k);
	for(i=0;i<4;i++)
	scanf("%d",&a[i]);
	for(i=0;i<4;i++)
	{
		if(i==k)
		printf("%d",a[i]);
	}
	return 0;
}
