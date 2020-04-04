#include <stdio.h>
int main ()
{
    int n,a[1200],k=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==1) k++;
    }
    if(n==1 && a[0]==1) printf("YES");
    else if( n==1 && a[0]==0) printf("NO");
   else if(k==n-1) printf("YES");
    else printf("NO");
    return 0;
}
