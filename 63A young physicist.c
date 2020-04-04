#include <stdio.h>
int main ()
{
    int n,x,y,z,sumx=0,sumy=0,sumz=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d %d",&x,&y,&z);
        sumx=sumx+x;
        sumy=sumy+y;
        sumz=sumz+z;
    }
    if(sumx==0 && sumy==0 && sumz==0 ) printf("YES");
    else printf("NO");
    return 0;
}
