#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n=5;
	for(int i=1;i<=n;i++)
	{
		for(int j=n;j>i;j--)
		{
			cout<<" ";
		}
		cout<<i;
		for(int j=2;j<i*2-1;j++)
		{
			cout<<" ";
		}
		if(i>1)
			cout<<i;
		cout<<endl;
	}
	for(int i=n-1;i>0;i--)
	{
		for(int j=n;j>i;j--)
			cout<<" ";
		cout<<i;
		for(int j=2;j<i*2-1;j++)
			cout<<" ";
		if(i>1)
			cout<<i;
		cout<<endl;
	}
}
