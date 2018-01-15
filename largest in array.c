#include<stdio.h>
int main(void)
{
	int a[5],i,n,largest;
	scanf("%d",&n);
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	largest=a[0];
	for(i=0;i<n;i++)
	if(a[i]>largest)
	largest=a[i];
	printf("%d is the largest number",largest);
}
