#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long n,a[1000],i,k;
    scanf("%li",&n);
    for(i=0;i<n;i++)
    {
        scanf("%li",&a[i]);
    }
    sort(a,a+n);
    if(i%2==0)
    {
        printf("%li",a[i/2-1]);
    }
    else {

        printf("%li",a[i/2]);
    }
    return 0;
}
