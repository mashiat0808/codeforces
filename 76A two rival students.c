#include <stdio.h>
#include <math.h>
int main ()
{
    int t,n,x,b,a;
    scanf("%d",&t);
    for(t;t>0;t--)
    {
        scanf("%d %d %d %d",&n,&x,&a,&b);
        if(n-1==abs(a-b))
        {
            printf("%d\n",n-1);

        }
       else if(x==0)
        {
            printf("%d\n",abs(a-b));

        }
        else {
                if(abs(a-b)+x<n)
                {
                    printf("%d\n",abs(a-b)+x);
                }
                else printf("%d\n",n-1);


        }

    }
    return 0;

}
