#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n],flag=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(a[a[i]]!=i)
		{
			flag=1;
		}
		else 
		{
			flag=0;
		}
	}
	if(flag==1)
	{
		cout<<"it is not mirror inverse";
	}
	else
	{
		cout<<"Yes it is a mirror inverse";
	}
	return 0;
}
