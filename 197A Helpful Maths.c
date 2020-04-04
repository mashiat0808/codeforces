#include <stdio.h>
#include <string.h>
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    char a[100];
    int i,k,n;
    gets(a);
    n=strlen(a);
    k=n/2;

    sort(a,a+n);
    for(k;k<n;k++)

       {
           printf("%c",a[k]);
           if(k!=n-1) printf("+");
       }
    return 0;
}
