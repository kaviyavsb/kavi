#include <stdio.h>
int main(void) {
	int a,b,temp;
	scanf("%d %d",&a,&b);
	temp=b;
	b=a;
	a=temp;
	printf("the value of a is %d\n",a);
	printf("the value of b is %d",b);
	return 0;
}
