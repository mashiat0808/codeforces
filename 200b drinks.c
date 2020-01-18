#include <stdio.h>
int main ()
{
     float n,p,i,sum;
     float x;
     sum=0;
     scanf("%f", &n);
     for(i=1; i<=n; i=i+1)
     {
         scanf("%f",&p);
         sum=sum+p;
     }
     x=sum/n;
     printf("%f",x);
    return 0;
}
