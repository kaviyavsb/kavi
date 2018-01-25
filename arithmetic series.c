#include <stdio.h>
int main(void) {
 int a,d,ans;
 float n;
 scanf("%d %f %d",&a,&n,&d);
 
 ans=(n/2)*(2*a+(n-1)*d);
 
 printf("%d",ans);
}
