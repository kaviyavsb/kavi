#include<stdio.h>
int main()
{
    char ch[20];
    int i;
    scanf("%[^\n]s",ch);
      for(i=0;ch[i]!='\0';i++)
    {
        if(i%2==0)
        printf("%c\t",ch[i]);
       
    }
     printf("\n");
    for(i=0;ch[i]!='\0';i++)
    {
        if(i%2!=0)
        printf("%c\t",ch[i]);
    }
    return 0;
    
}
    
