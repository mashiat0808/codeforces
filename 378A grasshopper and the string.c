#include <stdio.h>
#include <string.h>

int main ()
{
    char s[300];
    gets(s);
    int i,k=0,c,d=0;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='A' || s[i]=='E' || s[i]=='I' ||s[i]=='O' || s[i]=='U' || s[i]=='Y')
        {
            k=0;
        }
        else {k++;
           c=k;
         if(c>d) d=c;
        }

    }

     printf("%d",d+1);
    return 0;
}
