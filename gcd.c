#include<stdio.h>
int main()
{
    int a,b,n,i,m;
    scanf("%d%d %d",&a,&b,&n);
    for(i=1;i<=n;i++)
    {
        if((a%i==0)&&(b%i==0))
        m=i;
    }
    printf("%d",m);
    return 0;
}
