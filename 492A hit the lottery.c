#include <stdio.h>
int main ()
{
    long long n;
    int i;
    scanf("%lli",&n);
    for(i=1;; i++)
    {
        if(n>=100)
        {
            n=n-100;
            continue;
        }
        if(n>=20)
        {
            n=n-20;
            continue;
        }
        if(n>=10)
        {
            n=n-10;
            continue;
        }
        if(n>=5)
        {
            n=n-5;
            continue;
        }
        if(n>=1)
        {
            n=n-1;
            continue;
        }
        if(n==0) break;
    }
    printf("%d",i-1);
    return 0;
}
