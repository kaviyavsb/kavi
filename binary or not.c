#include <stdio.h>
#include<string.h>
int main(void) {
	char a[20];
	int i,n,count=0,ans;
scanf("%d",&n);
scanf("%[^\n]s",a);
ans=strlen(a);
     for(i=0;i<n;i++)
     {
	 if((a[i]='0')&&(a[i]='1'))
	 ++count;
     }
     if(count==ans)
     printf("yes");
     else
     printf("no");
     return 0;
}
