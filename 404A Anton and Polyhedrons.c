#include <stdio.h>
int main ()
{
    long n,i,sum=0;
    char s[15];
    scanf("%li",&n);
    for(i=1;i<=n+1;i++)
    {
        gets(s);
        if(s[0]=='T') sum=sum+4;
         if(s[0]=='C') sum=sum+6;
          if(s[0]=='O') sum=sum+8;
           if(s[0]=='D') sum=sum+12;
            if(s[0]=='I') sum=sum+20;
    }
    printf("%li",sum);
    return 0;
}
