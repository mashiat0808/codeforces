
#include <stdio.h>
int main ()
{
    float n,i;
    float sum;

    scanf("%f", &n);
    sum=0;
    for(i=1;i<=n;i=i+1)
    {
        sum=sum+(1/i);
    }
    printf("%f",sum);
    return 0;
}
