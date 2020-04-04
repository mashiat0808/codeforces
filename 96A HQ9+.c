#include <stdio.h>
#include <string.h>
int main ()
{
    char p[101];
    int i,x;
    x=0;
    gets(p);
    for(i=0; i<=strlen(p); i++)
    {
        if(p[i]=='H' || p[i]=='Q' ||p[i]=='9' )
        {
            x=1;
            break;
        }
    }
    if(x==1) printf("YES");
    else
        printf("NO");
    return 0;
}
