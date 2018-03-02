#include<stdio.h>
#include<string.h>
int main()
{
   char a[20];
   int l,i;
   scanf("%[^/n]s",a);
   l=strlen(a);
   for(i=0;i<=l&&a[i]!='\0';i++)
   {
       if(a[i]%2!=0)
       printf("%c\t",a[i]);
   }
   return 0;
}
