#include<stdio.h>
#include<string.h>
int main()
{
char a[100];
int count=0,i;
scanf("%[^\n]s",a);

for(i=0;a[i]!='\0';i++)
{
if(a[i]== ' ')
{
count=count+1;
}
}
printf("%d",count);
return 0;
}
