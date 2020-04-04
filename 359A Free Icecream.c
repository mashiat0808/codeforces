#include <stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int n, i;
	long long x, d[1000], k = 0;
	char c[1000];
	scanf("%d %lli", &n, &x);
	for (i = 0; i < n; i++)
	{
		cin>>c[i]>>d[i];
		if (c[i] == '+')
		{
			x = x + d[i];
		}
		else if (c[i] == '-')
		{
			if (x >= d[i])
			{
				x = x - d[i];
			}
			else if (x < d[i])
				k++;
		}
	}
	printf("%lli %lli", x, k);
	return 0;
}
