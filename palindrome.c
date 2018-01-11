#include <stdio.h>
int main(void) 
{
	int original,reverse,n,remainder;
	scanf("%d",&original);
	n=original;
	while(n!=0)
{
	remainder=n%10;
            reverse=reverse*10+remainder;
	n=n/10;
}
	if(original==reverse)
	{
		printf("%d this is a palindrome",reverse);
	}
	
	return 0;
}
