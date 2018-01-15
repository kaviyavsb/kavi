#include <stdio.h>
int main(void) {
	int n,original,reverse=0,remainder;
	scanf("%d",&n);
	original=n;
	while(original!=0)
	remainder=original%10;
	reverse=reverse+remainder*remainder*remainder;
	original=original/10;
	if(n==reverse)
	printf("%d is the armstrong number",n);
	else
	printf("%d is not an armstrong number",n);
	return 0;
}
