#include <stdio.h>
int main ()
{
    long long int sum,i,n;
    scanf("%lli", &n);
    if (n%2==0) printf("%lli", n/2);
    else printf("%lli", -(n+1)/2);

    return 0;
}
