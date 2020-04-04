#include <stdio.h>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int x[4],a,b,c,i;
    for(i=0;i<4;i++)
    {
        scanf("%d",&x[i]);
    }
    sort(x,x+4);
    a=x[3]-x[2];
    b=x[3]-x[1];
    c=x[3]-x[0];
    printf("%d %d %d",a,b,c);
    return 0;

}
