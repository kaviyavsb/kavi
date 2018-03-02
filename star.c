#include<stdio.h>
#include<string.h>
int main()
{
   char a[20];
   int l,ans,i;
   scanf("%s",&a);
   l=strlen(a);
   if(l%2!=0)
   {
      ans=l/2;
     a[ans]='*';
    }
    if(l%2==0)
   {
      ans=l/2;
     a[ans]='*';
     a[ans-1]='*';
    }
   printf("%s",a);
return 0;
}
