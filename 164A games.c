#include <stdio.h>
int main ()
{
    int n,h[40],a[40],i,j,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&h[i],&a[i]);
    }
    for(i=0;i<n;i++)
    {
           for(j=0;j<n;j++)
    {
        if(h[i]==a[j]) k++;
    }

    }
     printf("%d",k);
    return 0;

}
