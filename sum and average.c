#include <stdio.h>
int main(void) {
	int n,a[5],sum=0,avg,i;
	scanf("%d",&n);
	for(i=1;i<=5;i++)
	scanf("%d",&a[i]);
	for(i=1;i<=n;i++)
	{
	sum=sum+a[i];
	}
	printf("%d is the sum of all the numbers\n",sum);
	avg=sum/n;
	printf("%d is the total average",avg);
	return 0;
}
