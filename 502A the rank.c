#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,i,a[1000],b[1000],c[1000],d[1000],sum[1000],x=0;
    cin>>n;

    for(i=0;i<n;i++)
    {   sum[i]=0;
        cin>>a[i]>>b[i]>>c[i]>>d[i];
        sum[i]=a[i]+b[i]+c[i]+d[i];
    }if(n==1) cout<<1;
    else {
         x=sum[0];
    sort(sum,sum+n);
    for(n;n>=0;n--)
    {
        if(sum[n]==x) break;
    }
    cout<<i-n;
    }

    return 0;


}
