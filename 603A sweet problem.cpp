#include <stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,i;
    long long r,g,b,a;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lli %lli %lli",&r,&g,&b);

    a=(r+g+b)/2;
    if((r+g)<a)
    {
        a=r+g;
    }
    if((b+g)<a)
    {
        a=b+g;
    }
    if((r+b)<a)
    {
        a=r+b;
    }
    printf("%lli\n",a);
    }
    return 0;

}
