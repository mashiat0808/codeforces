
#include <stdio.h>
#include <string.h>
int main ()
{
    char a[100],b[100];
    int i;
    gets(a);
    gets(b);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]>='A' && a[i]<='Z') {a[i]=a[i]+32;}


    }
    for(i=0;i<strlen(b);i++)
    {
        if(b[i]>='A' && b[i]<='Z') {b[i]=b[i]+32;}
    }
      if(strcmp(a,b)==0)
    {
        printf("0");
    }
    else if(strcmp(a,b)>0)
    {
        printf("1");
    }
    else
    {
        printf("-1");
    }
    return 0;
}
