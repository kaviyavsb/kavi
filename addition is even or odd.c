#include <stdio.h>
int main(void) {
	int a,b,add;
	scanf("%d %d",&a,&b);
	add=a+b;
	if(add%2==0)
	printf("%d is an even number",add);
	else
	printf("%d is an odd number",add);
	return 0;
}
