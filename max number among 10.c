#include<stdio.h>
int main(void)
{
	int a[10],i,max;
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	max=a[0];
	for(i=0;i<10;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	printf("%d is the max number among 10 numbers",max);
	return 0;
}
