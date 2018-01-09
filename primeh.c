# include<stdio.h>
int main(void)
{
int i,j,m,f=0,n;
scanf("%d %d",&m,&n);
for(i=m;i<=n;i++)
{
	f=0;
for(j=1;j<=n;j++)
{
if(i%j==0)
f++;
}
if(f==2)
printf("%d this is  a prime number",i);
}
return 0;
}
