#include <stdio.h>
int main(void) {
	int i,m,n,original,reverse,remainder;
	scanf("%d %d",&m,&n);
	for(i=m;i<n;i++)
	{
		original=i;
		while(original!=0)
		remainder=original%10;
		reverse=reverse+remainder*remainder*remainder;
	    original=original/10;
		if(i==reverse)
		printf("%d is an armstrong number",i);
	}
    return 0;
}
