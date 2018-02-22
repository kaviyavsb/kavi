#include <stdio.h>
int main(void) {
	char a[20];
	int i;
   scanf("%[^\n]s",a);
     for(i=0;i<=2;i++)
     {
	 printf("%c",a[i]);
	}
	return 0;
}
