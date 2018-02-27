#include <stdio.h>
int main()
{
    int a,b,ans;
     char ch;
    scanf("%d %d %c",&a,&b,&ch);
    switch(ch)
    {
    case '/':
     ans=a/b;
     printf("%d",ans);
     break;
    case '%':
     ans=a%b;
     printf("%d",ans);
     break;
     default:
     printf("nothing");
     break;
    }
     return 0;
}
