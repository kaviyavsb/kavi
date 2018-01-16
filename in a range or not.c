#include <stdio.h>
int main(void) 
{
	int m,n,a;
	scanf("%d %d %d",&m,&n,&a);
	if((a>=m)&&(a<=n))
	printf("%d is in a range",a);
	else
	printf("%d is not in a range",a);
	return 0;
}
