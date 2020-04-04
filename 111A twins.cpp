#include<stdio.h>
int main()
{
    int n,a[100],i,j,sum=0,s1=0,s2=0,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                sum=a[i];
                a[i]=a[j];
                a[j]=sum;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        s1=s1+a[i];
        for(j=i+1;j<n;j++)
        {
            s2=s2+a[j];
        }
        if(s1<=s2)
        {
            k++;
            s2=0;
        }
        else break;
    }
    printf("%d",k+1);
}
