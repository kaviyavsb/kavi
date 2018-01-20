#include<stdio.h>
int main(void)
{
	int a[3],i;
	for(i=0;i<3;i++)
	scanf("%d",&a[i]);
	for(i=0;i<3;i++)
	{
		printf("%d is the value of a[i]\n",a[i]);
		printf("%d is the value of i\n",i);
	}
	return 0;
}
