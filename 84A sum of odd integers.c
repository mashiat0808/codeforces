#include <iostream>
using namespace std;
int main()
{
	int t,i;
	cin >> t;
	for(i=1;i<=t;i++)
	{
		long long n, k;
		cin >> n >> k;
		if ((n % 2 == 0 && k % 2 != 0) || (k % 2 == 0 && n % 2 != 0))
			cout << "NO" << endl;
		else
		{
			if((k*k)<=n)
				cout<<"YES"<<endl;
			else
				cout << "NO" << endl;
		}
	}
}
