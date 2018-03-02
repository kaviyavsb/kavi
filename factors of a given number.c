#include<stdio.h>
int main()
{
    int a,n,i;
    scanf("%d %d",&a,&n);
    for(i=1;i<=n;i++)
    {
        if(a%i==0)
        printf("%d\t",i);
    }
    return 0;
}
