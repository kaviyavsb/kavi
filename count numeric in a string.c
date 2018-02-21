#include <stdio.h>
int main(void) {
	char a[30];
	int count=0,i;
	scanf("%[^\n]s",a);
	for(i=1;a[i]!='\0';i++)
	{
	if(a[i]>='0'&&a[i]<='9')
	{
	++count;
	}
	}
	printf("%d",count);
            return 0;
}
