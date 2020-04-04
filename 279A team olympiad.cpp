#include<iostream>
using namespace std;
int main()
{
	int n,i,t1[5000],t2[5000],t3[5000],x=0,y=0,z=0,w,s;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        	t1[x++]=i+1;
        else if(a[i]==2)
            t2[y++]=i+1;
        else if(a[i]==3)
            t3[z++]=i+1;
    }
    s=min(x,y);
    w=min(s,z);
    cout<<w<<endl;
    for(x=0;x<w;x++)
		cout<<t1[x]<<" "<<t2[x]<<" "<<t3[x]<<endl;
}
