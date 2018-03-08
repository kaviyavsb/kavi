#include <stdio.h>
int main()
{
char a[50];
int i,count=0,count1=0;
scanf("%[^/n]s",a);
for(i=0;a[i]!='\0';i++)
{
    if((a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z')||(a[i]>='0'&&a[i]<='9'))
    count=0;
    else
    ++count1;
}
printf("%d",count1);
return 0;
}
