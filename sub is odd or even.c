#include <stdio.h>
int main(void) {
    int a,b,sub;
    scanf("%d %d",&a,&b);
    sub=a-b;
    printf("%d",sub);
    if(sub%2==0)
    printf("the result is an even number");
    else
    printf("the result is an odd number");
	return 0;
}
