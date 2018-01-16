#include <stdio.h>
int main(void) {
    int a[10],i,largest;
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    for(i=0;i<10;i++)
    printf("%d\n",a[i]);
    largest=a[0];
    for(i=0;i<10;i++)
    if(a[i]>largest)
    largest=a[i];
    printf("%d is the largest number",largest);
	return 0;
}
