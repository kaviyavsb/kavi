#include<stdio.h>
int main(void)
{
int i,j,m,n;
scanf("%d %d",&m,&n);
for(i=m;i<n;i++)
{
if(i%2!=0)
printf("%d this is an odd number",i);
}
return 0;
}
