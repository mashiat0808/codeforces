#include <Stdio.h>
int main ()
{
    int n,j,i,c=0;
    long long x;
    scanf("%d %lli",&n,&x);

    for(i=1;i<=n;i++)
        {
            if((x%i)==0 && (x/i)<=n) c++;
        }
        printf("%d",c);
    }
