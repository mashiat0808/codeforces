
#include<stdio.h>
int main ()
{
    int m,n,a, b, x,i;

    scanf("%d %d",&n, &m);
    x=n;
    for (i=1; ;)
    {
    	a=n/m;
    	b=a+(n%m);
    	n=b;
    	x=x+a;
    	if (b<m)
    	{break;}
    }
    printf("%d", x);


        return 0;
}
