#include <stdio.h>
int main ()
{
    long long n,k,l;
    int x,y;
    scanf("%lli",&n);
    if(n>=0)
    {
        printf("%lli",n);
        return 0;
    }
    if(n>-11)
    {
        printf("0");
        return 0;
    }
    else{
        x=n%10;
        k=n/10;
        y=k%10;
        l=n/100;
        if(x<=y) {
            printf("%lli",k);
            return 0;
        }
        if(y<x)
        {
            printf("%lli",l*10+x);
            return 0;
        }

    }

}
