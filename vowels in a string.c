#include<stdio.h>
#include<string.h>
int main()
{ int i,j,l,count=0;
   char a[20];
   scanf("%s",a);
   l=strlen(a);
   for(i=0;i<l;i++)
   {
       if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
       ++count;
   }
   if(count>0)
   printf("yes");
   else
   printf("no");
   return 0;
}
