#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a1[n],a2[n];
	for(int i=0;i<n;i++)
	{
		cin>>a1[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>a2[i];
	}
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+a1[i]+a2[i];
	}
	cout<<sum;
	return 0;
}
