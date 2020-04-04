#include <stdio.h>
int main ()
{
    int t;
    long a,b,x;
    scanf("%d",&t);
    for(t;t>0;t--)
    {
        scanf("%li %li ",&a,&b);
        if(a==b) printf("0\n");
        if(a>b)
        {
            x=a-b;
            if(x%2==0) printf("1\n");
            else printf("2\n");
        }
        if(a<b)
        {
            x=b-a;
            if(x%2==0) printf("2\n");
            else printf("1\n");
        }
    }
    return 0;
}
