
#include <stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,m,a[100],b[100],c=0,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&m);
    for(i=0;i<m;i++)
        scanf("%d",&b[i]);

    sort(a,a+n);
    sort(b,b+m);
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
    {
        if((a[i]==b[j]+1 || a[i]==b[j]-1 || a[i]==b[j]) && b[j]!=0)
        {
            c++;
            b[j]=0;
            break;
        }
    }
    printf("%d",c);
    return 0;
}
