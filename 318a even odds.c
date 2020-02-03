
#include <stdio.h>
int main()
{
	long long n,k,i,sum;
	scanf("%lli %lli",&n,&k);
	if (n%2==0 && n/2>=k)
	{ sum=1;
    for (i=1; i<k; i=i+1)
        sum=sum+2;
		}
    else if (n%2==0 && n/2<=k)
        {sum=0;
        for (i=1; i<=k-(n/2); i=i+1)
        sum=sum+2;}
    else if ((n+1)/2>=k)
	{	sum=1;
        for (i=1; i<k; i=i+1)
				sum=sum+2;}
    else { sum=0;
        for (i=1; i<=k-((n+1)/2); i=i+1)
        sum=sum+2; }
	printf("%lli", sum);
	return 0;
	}
