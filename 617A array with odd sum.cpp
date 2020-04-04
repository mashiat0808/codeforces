#include <iostream>
using namespace std;
int main()
{
	int n, a[2001], t, s, i, x;
	cin >> t;
	for (n = 1; n <= t; n++)
	{
		cin >> x;
		s = 0;
		for (i = 0; i < x; i++)
		{
			cin >> a[i];
			if ((a[i] % 2) != 0)
				s++;
		}
		if ((s % 2) == 0 && s<x && s>0)
			cout << "YES" << endl;
		else if ((s%2)==0)
			cout<<"NO"<<endl;
		else
			cout << "YES" << endl;
	}
}
