#include <stdio.h>
int main(void) {
	int a[3],i,k;
	scanf("%d",&k);
	for(i=0;i<3;i++)
	scanf("%d",&a[i]);
	for(i=0;i<3;i++)
	{
		if(a[i]==k)
		printf("yes");
	}
	return 0;
}
