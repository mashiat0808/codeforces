#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,a[100000],i,j,k,sum=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
   sort(a,a+n);
   k=a[n-1];

   for(i=0;i<n;i++)
   {
       sum=k-a[i]+sum;
   }
	printf("%d",sum);
}
