#include <stdio.h>
int main(void) {
	int a[3],i,smallest;
	for(i=0;i<4;i++)
	scanf("%d",&a[i]);
	smallest=a[0];
	for(i=0;i<4;i++)
	{
		if(a[i]<smallest)
		smallest=a[i];
	}
	printf("%d",smallest);
}
