#include <stdio.h>
#include<string.h>
int main()
{
    char a[10],d[10],c[10];
    int i,l;
    scanf("%s",a);
    l=strlen(a);
    for(i=0;a[i]!='\0';i++)
    {
    c[i]=a[l-i-1];
    }
    for(i=0;a[i]!='\0';i++)
    {
    d[i]=c[l-i-1];
    printf("%c\t",d[i]);
    }
    return 0;
}
