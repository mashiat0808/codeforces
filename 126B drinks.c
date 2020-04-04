#include <stdio.h>
int main ()
{
    int n,p,i;
    float j,sum,q;
    sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&p);
        q=(float)p;
        sum=(q/100) +sum;
    }

     j=(float)(sum*100/n);
    printf("%f",j);
    return 0;
}
