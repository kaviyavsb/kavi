#include <stdio.h>
int main(void) {
	int a[5],i,n,sum=0;
             for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	sum=sum+a[i];
	}
	printf("%d",sum);
	return 0;
}
