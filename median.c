#include <stdio.h>
int main(void) {
int a[6],i,temp,j;
for(i=0;i<6;i++)
scanf("%d",&a[i]);
for(i=0;i<6;i++)
{
for(j=i+1;i<6;i++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
	
}
}
printf("%d",a[2]);
}
