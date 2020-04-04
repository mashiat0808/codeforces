#include<stdio.h>
#include <math.h>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n,a,b,c,t,y,z,x,i,f[3];
    scanf("%d",&t);
    for(t;t>0;t--)
    {
        scanf("%d %d %d %d",&a,&b,&c,&n);
        {
            f[0]=a;
            f[1]=b;
            f[2]=c;
            sort(f,f+3);
            z=f[2]-f[1]+f[2]-f[0];
        }
        if((n-z)%3==0 && n>=z) printf("YES\n");
        else printf("NO\n");
    }
}
