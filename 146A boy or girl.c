#include <stdio.h>
#include <string.h>
int main()
{
    char s[100],i,j,k,l=0;
    gets(s);
    for (i=0;i<strlen(s)-1;i++)

    // Last i elements are already in place
    for (j=0;j<strlen(s)-i-1;j++)
        if (s[j]>s[j+1])
        {
            k=s[j];
            s[j]=s[j+1];
            s[j+1]=k;
        }
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]==s[i+1]) continue;
        l++;
    }
    if(l%2==0) printf("CHAT WITH HER!");
    else printf("IGNORE HIM!");
    return 0;
}
