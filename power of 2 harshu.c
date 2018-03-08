#include <stdio.h>
#include<math.h>
int main()
{
    int no,n,i,count=0;
    scanf("%d %d",&no,&n);
    for(i=0;i<=n;i++)
    {
    if(pow(2,i)==no)
    ++count;
    }
    if(count>0)
    printf("yes");
    else
    printf("no");
    return 0;
}
