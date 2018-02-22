#include <stdio.h>
int main(void) {
	char a[20];
	int i,m;
	scanf("%d",&m);
scanf("%[^\n]s",a);
     for(i=0;i<m;i++)
     {
	 printf("%c",a[i]);
	}
	return 0;
}
