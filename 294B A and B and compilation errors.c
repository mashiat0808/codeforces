#include <stdio.h>
int main ()
{
    int n,i;
    long a[100000],b[100000],c[100000],suma=0,sumb=0,sumc=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%li",&a[i]);
        suma=suma+a[i];
    }

    for(i=0;i<n-1;i++)
    {
        scanf("%li",&b[i]);
        sumb=sumb+b[i];
    }
     for(i=0;i<n-2;i++)
    {
        scanf("%li",&c[i]);
        sumc=sumc+c[i];
    }
    printf("%li\n",suma-sumb);
    printf("%li",sumb-sumc);
    return 0;

}
