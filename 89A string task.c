#include<stdio.h>
#include <string.h>
int main ()
{
    char c[101],i;
    gets(c);
    for(i=0;i<strlen(c);i++)
    {
        if(c[i]=='A'||c[i]=='E'||c[i]=='I'||c[i]=='O'||c[i]=='U'||c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u' ||c[i]=='Y'||c[i]=='y') continue;
        else if(c[i]>='A' && c[i]<='Z')  printf(".%c",c[i]+32);
        else printf(".%c",c[i]);
    }
    return 0;
}
