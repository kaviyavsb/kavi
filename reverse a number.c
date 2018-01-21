#include <stdio.h>
int main(void) {
	int a,remain,n,result;
	scanf("%d",&a);
	n=a;
	while(n!=0)
	{
		remain=n%10;
		result=result*10+remain;
		n=n/10;
	}
printf("%d",result);
return 0;
}
