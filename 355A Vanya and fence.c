#include <stdio.h>
int main ()
{
    int n,h,a[2000],j=0,i;
    scanf("%d %d", &n,&h);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>h) j++;
    }
    printf("%d",j+i);
    return 0;
}
