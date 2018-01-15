#include <stdio.h>
int main(void) {
	char c;
	scanf("%c",&c);
    int a={'a','e','i','o','u'};
    int b={'A','E','I','O','U'};
    a=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    b=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    if(a||b)
    printf("%c is the vowel",c);
    else
     printf("%c is not a vowel",c);
	return 0;
}
