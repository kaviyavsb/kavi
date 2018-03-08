#include <stdio.h>
#include<string.h>
int main()
{
char a[50],b[50];
int i,l,m,count=0;
scanf("%s %s",a,b);
l=strlen(a);
m=strlen(b);
for(i=0;a[i]!='\0'&&b[i]!='\0';i++)
{
if(a[i]==b[i])
++count;
}
if((count==l)&&(count==m))
printf("two strings are equal");
else if(a[0]>b[0])
printf("%s",a);
else
printf("%s",b);
return 0;
}
