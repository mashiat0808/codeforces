#include <stdio.h>
int main ()
{
    long long n,a[200000],i,sum=0,max=0;
    scanf("%lli",&n);
    for(i=0; i<n; i++)
    {
        scanf("%lli",&a[i]);
        sum=sum+a[i];
        if(max<a[i])
            max=a[i];
    }
    if(sum%2!=0)
        printf("NO");
    else if(sum%2==0)
    {
        if(max<=sum-max)
            printf("YES");
        else
            printf("NO");
        return 0;
    }
}
