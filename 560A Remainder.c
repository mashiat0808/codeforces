#include <stdio.h>
#include <string.h>
int main ()
{
    int n,x,y,i,z,k=0;
    char c[2000000];
    scanf("%d %d %d",&n,&x,&y);
    z=n-1;

    for(n; n>=0; n--)
    {
        scanf("%c",&c[n]);
    }
    getchar();

    for(i=0; i<x; i++)
    {
        if(i==x)
        {
            if(c[i]!='1')
            {
                k++;
                break;
            }
            else
                break;
        }
        if(i==y)
        {
            if(c[i]!='1')
                k++;
        }

        else if(i<x && c[i]!='0')
            k++;

    }
    printf("%d",k);
    return 0;
}
