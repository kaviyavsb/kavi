#include<stdio.h>
#include<string.h>
int main()
{
    char s[30];
    int a,n,i,ans;
    scanf("%d",&n);
    scanf("%[^\n]s",s);
    a=strlen(s);
    ans=a-n;
    printf("%c",s[ans]);
    return 0;
   }
    
