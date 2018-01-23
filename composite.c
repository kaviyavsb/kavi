#include <stdio.h>
int main(void) {
	int a,i,count=0,n;
	scanf("%d %d",&a,&n);
	for(i=1;i<=n;i++)
	{
		if(a%i==0)
		count++;
	}
	if(count>2)
	printf("%d is the composite number",a);
	else
	printf("%d is not composite number",a);
	return 0;
}
