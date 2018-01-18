include <stdio.h>
int main(void) {
	int t1=0,t2=1,i,result,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("the value of t1 is %d\n",t1);
		result=t1+t2;
		t1=t2;
		t2=result;
		printf("the result is %d\n",result);
	}
	return 0;
}
