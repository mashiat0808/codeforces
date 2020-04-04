#include <stdio.h>
#include <string.h>
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,i;
    char c[120],k='a';
    scanf("%d",&n);
    getchar();
    gets(c);
    if(n<26)
        printf("NO");
    else
    {
        for(i=0; i<n; i++)
        {
            if(c[i]>='A' && c[i]<='Z')
            {
                c[i]=c[i]+32;
            }
        }
        {
            sort(c,c+n);
            for(i=0; i<n-1; i++)
            {
                if(c[i]==k)
                    k++;
                    if(k=='z' && c[n-1]=='z' ){
                        printf("YES");
                        return 0;
                    }
            }
printf("NO");
        }


    }

    return 0;

}
