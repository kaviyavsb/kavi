#include<stdio.h>
int main(void)
{
	int a[5],i,n,smallest;
	scanf("%d",&n);
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	smallest=a[0];
	for(i=0;i<n;i++)
	if(a[i]<smallest)
	smallest=a[i];
	printf("%d is the smallest number",smallest);
}
