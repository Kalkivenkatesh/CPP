//First negative integer in every window of size k
#include<bits/stdc++.h>
using namespace std;

void window(int a[],int n,int k)
{
	bool flag;
	for(int i=0;i<(n-k+1);i++)
	{
		flag = false;
		for(int j=0;j<k;j++)
		{
			if(a[i+j]<0)
			{
				cout<<a[i+j]<<" ";
				flag = true;
				break;
			}
		}
		if(!flag)
		{
			cout<<"0"<<" ";
		}
	}
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int k;
	cin>>k;
	window(a,n,k);
	
}
