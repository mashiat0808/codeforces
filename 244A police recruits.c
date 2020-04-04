#include <stdio.h>
int main ()
{
    int n,a[100000],k=0,sum=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<0)
        {
           sum=sum+a[i];
           if(sum<0)
            {k++;
            sum=0;}
        }
        else if(a[i]>0)
        {
            sum=sum+a[i];
        }

    }
    printf("%d",k);
    return 0;
}
