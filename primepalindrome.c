#include <stdio.h>
int main(void) {
	int i,m,n,count=0,original,reverse=0,remainder;
	scanf("%d %d",&m,&n);
	for(i=1;i<n;i++)
	{
	if(i%m==0)
	{
	++count;
	if(count==2)
	printf("%d is the prime number\n",m);
	{
	original=m;
	remainder=original%10;
	reverse=reverse*10+remainder;
	original=original/10;
	if(reverse==original){
	printf("%d is the palindrome\n",m);}
	}
	}
	}
	return 0;
}
