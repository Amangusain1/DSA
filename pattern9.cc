#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n=5;
	for(int i=n-1;i>=0;i--)
	{
		for(int j=n-1;j>i;j--)
		{
			cout<<" ";
		}
		cout<<(char)(65+i);
		for(int j=1;j<i*2;j++)
		{
			cout<<" ";
		}
		if(i>0)
			cout<<char(65+i);
		cout<<endl;
	}
}
