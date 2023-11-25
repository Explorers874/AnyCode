#include<bits/stdc++.h>
using namespace std;
int n,a[2000000],m;
int main()
{
	cin>>n;
	cin>>m;
	for(int i=1;i<=m;i++)
	{
	    cin>>a[i];
	}
	sort(a+1,a+m+1);
	for(int i=1;i<=m;i++)
	{
	    cout<<a[i]<<" ";
	}
	return 0;
}