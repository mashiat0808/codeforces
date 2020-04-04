#include <stdio.h>
#include <string.h>
int main ()
{
    int n,sum=0,sum1=0,i,x;
    char c[60];
    scanf("%d",&n);
    getchar();
    gets(c);
    for(i=0;i<n;i++)
    {
        if(c[i]!='4' && c[i]!='7')
        {
           printf("NO");
           return 0;
        }
    }
  /*  for(i=0;i<n;i++)
    {
        if(c[i]=='4' || c[i]=='7')
            break;
    }

    for(i;i<n;i++)
    {
        if(c[i]=='0'){
            printf("NO");
            return 0;
        }
    } */

    for(i=0;i<n/2;i++)
    {
       sum=sum+c[i];
    }
    for(i=n/2;i<n;i++)
     {
       sum1=sum1+c[i];
    }

    if(sum==sum1) printf("YES");
    else printf("NO");
    return 0;

}
