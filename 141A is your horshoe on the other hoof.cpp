#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int s[4],i,j=0;
    for(i=0;i<4;i++)
       {
          scanf("%d",&s[i]);
       }
    sort(s,s+4);
    for(i=0;i<4;i++)
       {
           if(s[i]==s[i+1]) j++;
       }

    printf("%d",j);
    return 0;


}
