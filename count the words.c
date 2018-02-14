#include<stdio.h>
#include<string.h>
int main()
{
    char a[200];
    int i,count=0;
    scanf("%[^\n]s",a);
    for(i=1;a[i]!='\0';i++)
    if(a[i]== ' ')
    ++count;
    printf("%d",++count);
    return 0;
}
