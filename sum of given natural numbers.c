#include<stdio.h>
int main()
{
    int no,i,sum=0;
    scanf("%d",&no);
    for(i=1;i<=no;i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}
