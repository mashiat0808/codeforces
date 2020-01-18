#include <stdio.h>
int main ()
{
    int k,w,i;
    long int n,sum;
    sum=0;
    scanf("%d %li %d", &k, &n, &w);
    for(i=1; i<=w; i=i+1)
    {
        sum=i*k+sum;
    }
    if(sum<=n)
        printf("0");
    else printf("%li",sum-n);
    return 0;
}
