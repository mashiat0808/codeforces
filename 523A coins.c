#include <stdio.h>
int main ()
{
    long long n,S,i;
    scanf("%lli %lli",&n,&S);
    for(i=1;;i++)
    {
        S=S-n;
        if(S<=0) break;
    }
    printf("%lli",i);
    return 0;
}
