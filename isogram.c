#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,count=0;
char a[20];
scanf("%[^/n]s",a);
for(i=0;a[i]!='\0';i++)
{
for(j=i+1;a[j]!='\0';j++)
{
    if(a[i]==a[j])
    ++count;
}}
if(count>0)
printf("not an isogram");
else
printf("isogram");
return 0;
}
