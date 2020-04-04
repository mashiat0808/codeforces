
#include <Stdio.h>
int main ()
{
    int n,p,q,i,j=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&p,&q);
        if(q-p>=2) j++;
    }
    printf("%d",j);
    return 0;
}
