#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, a, b, c, i, x, y, p=0, z;
	cin>>n>>a>>b>>c;
	i = min(a, min(b, c));
	i=n/i;
	for (x = i; x >= 0; x--)
	{
		for (y = 0; y <= i; y++)
		{
			z = abs((n - (a * x + b * y)) / c);
			if ((a * x + b * y + c * z) == n)
			{
				p = max(p, x + y + z);
			}
		}
	}
	cout << p;
}
