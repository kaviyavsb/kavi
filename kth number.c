#include <stdio.h>
int main(void) {
	int i,a[10],k,n;
	scanf("%d",&k);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(i=k)
		printf("%d",a[i]);
	}
	return 0;
}
