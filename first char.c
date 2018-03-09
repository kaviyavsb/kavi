#include <stdio.h>
int main()
{
  char a[100];
  int i;
  gets(a);
  for(i=0;a[i]!='\0';i++)
  {  
      if(i==0)
     {
     if(a[i]>='a'&&a[i]<='z')
    { a[i]=a[i]-32;
     printf("%c",a[i]);}
     else
     printf("%c",a[i]);
     }
     else if(a[i]==' ')
     {  
     if(a[i+1]>='a'&&a[i+1]<='z')
     {   printf("%c",a[i]);
        i++;
        a[i]=a[i]-32;
     printf("%c",a[i]);
    }
     else
     printf("%c",a[i]);
     }
     else
     printf("%c",a[i]);
  }
  return 0;
}
