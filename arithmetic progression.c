#include<stdio.h>
int main()
{
    int a,n,d,ans;
    scanf("%d %d %d",&a,&n,&d);
    ans=(n/2)*(2*a+(n-1)*d);
    printf("%d",ans);
    return 0;
}
    
