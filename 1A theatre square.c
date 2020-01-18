#include <stdio.h>
#include <math.h>
long main()

{
    long long m,n,x,a,y,r;
    scanf("%lli %lli %lli", &n, &m, &a);
    if (n*m==a)
    {
        r=1;
    }
    else if(n%a==0&&m%a==0)
       {
        x=n/a;
        y=m/a;
        r=x*y;
       }
       else if (n%a==0&&m%a!=0)
       {
           x=n/a;
           y=(m/a)+1;
           r=x*y;
       }
       else if (m%a==0&&n%a!=0)
       {
           x=(n/a)+1;
           y=m/a;
           r=x*y;
       }
       else  {
        x=(n/a)+1;
        y=(m/a)+1;
        r=x*y;
       }
       printf("%lli",r);
     return 0;
}
