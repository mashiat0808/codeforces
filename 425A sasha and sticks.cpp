#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long n,k,j;
    cin>>n>>k;
    j=(n/k)%2;
    if(n==1 && k==1) cout<<"YES";
   else if( j==1) cout<<"YES";
    else  cout<<"NO";
    return 0;
}
