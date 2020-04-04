#include <stdio.h>
#include <string.h>
int main ()
{
    char a[150];
    char b[150];
    char c[150];
    int i,j=0,k=0,l=0;
    gets(a);
    gets(b);
    gets(c);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]=='a' || a[i]=='e' ||a[i]=='i' ||a[i]=='o' ||a[i]=='u' ) j++;
    }
    for(i=0;i<strlen(b);i++)
    {
        if(b[i]=='a' || b[i]=='e' ||b[i]=='i' ||b[i]=='o' ||b[i]=='u' ) k++;
    }
    for(i=0;i<strlen(c);i++)
    {
        if(c[i]=='a' || c[i]=='e' ||c[i]=='i' ||c[i]=='o' ||c[i]=='u' ) l++;
    }

    if(j==5 && k==7 && l==5) printf("YES");
    else printf("NO");
    return 0;

}
