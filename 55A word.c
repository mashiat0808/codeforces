#include<stdio.h>
#include <string.h>
int main ()
{
    char s[101];
    int i,j=0,k=0;
    gets(s);
    for(i=0;i<strlen(s);i++)
    {
       if(s[i]>='A' && s[i]<='Z') j++;
       else k++;
    }
    if (j>k) {
        for(i=0;i<strlen(s);i++){
             if(s[i]>='a' && s[i]<='z') {
                s[i]=s[i]-32;
                printf("%c",s[i]);
           }
        else printf("%c",s[i]);
        }
    }
    else for(i=0;i<strlen(s);i++){
             if(s[i]>='A' && s[i]<='Z') {
                s[i]=s[i]+32;
                printf("%c",s[i]);
           }
        else printf("%c",s[i]);
        }


    return 0;
}
