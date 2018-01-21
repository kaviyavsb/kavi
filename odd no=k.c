#include <stdio.h>
int main(void) {
	int a[3],i,k;
	scanf("%d",&k);
	for(i=0;i<3;i++)
	scanf("%d",&a[i]);
	for(i=0;i<3;i++)
	{
		if(i==k)
		{
		if(a[i]%2!=0)
		printf("%d",a[i]);
		else
		printf("there is no odd number");
		}
	}
	return 0;
}
