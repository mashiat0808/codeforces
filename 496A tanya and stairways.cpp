#include<iostream>
using namespace std;
int main()
{
	int n, c=0, a[1000], x[1000], xi=0, i;
	cin>>n;
	for(i=0; i<n; i++)
		cin>>a[i];
	for(i=0; i<n-1; i++)
	{
		if(a[i+1]==1)
		{
			x[xi++]=a[i];
			c++;
		}
	}
	x[xi]=a[n-1];
	cout<<c+1<<endl;
	for(i=0; i<=xi; i++)
		cout<<x[i]<<" ";
}
