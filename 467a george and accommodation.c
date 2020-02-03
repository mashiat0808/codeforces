#include <stdio.h>
int main ()  {
    int n,p,q,i,x;
    x=0;
    scanf("%d",&n);
    for(i=1; i<=n; i=i+1)
        {scanf("%d %d", &p, &q);
        if(p-q>=2 || q-p>=2) x=x+1;
        }
    printf("%d", x);
    return 0;

}
