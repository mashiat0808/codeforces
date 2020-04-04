#include <stdio.h>
int main ()
{
    int t,x;
    scanf("%d",&t);
    for(t;t>0;t--)
    {
        scanf("%d",&x);
        printf("%d %d\n",1,x-1);
    }
    return 0;
}
