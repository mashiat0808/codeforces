#include <stdio.h>
#include <string.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[300];
    char b[300];
    char c[600];
    int d;
    gets(a);
    gets(b);
    gets(c);
    strcat(a,b);
    sort(a,a+strlen(a));
    sort(c,c+strlen(c));
    d=strcmp(a,c);
    if(d==0) printf("YES");
    else printf("NO");
    return 0;
}
