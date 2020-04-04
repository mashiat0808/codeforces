#include <stdio.h>
int main()
{
    int n,a[100],i,j,k,sum=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0; i<n; i++)
        for (j=0; j<n-i-1; j++)
            if (a[j]>a[j+1])
            {
                k=a[j];
                a[j]=a[j+1];
                a[j+1]=k;
            }
    for(i=0; i<n; i=i+2)
    {
        sum=(a[i+1]-a[i])+sum;
    }
    printf("%d",sum);
    return 0;
}
