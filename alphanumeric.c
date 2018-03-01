#include<stdio.h>
int main()
{
    int i;
char a[20];
scanf("%[^/n]s",a);
for(i=1;a[i]!='\0';i++)
{
    if((a[i]>='0')&&(a[i]<='9'))
    printf("%c",a[i]);
}
return 0;
}
