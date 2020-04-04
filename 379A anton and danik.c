#include <Stdio.h>
int main ()
{
    long n,a,d,i;
    a=0;
    d=0;
    char s[100000];
    scanf("%li",&n);
    for(i=0;i<=n;i++)
    {
        s[i]=getchar();
        if(s[i]=='A') a++;
        if(s[i]=='D') d++;
    }
       if(a>d) printf("Anton");
       if(d>a) printf("Danik");
       if (d==a) printf("Friendship");
       return 0;

}
