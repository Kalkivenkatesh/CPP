//Minimize the maximum difference between adjacent elements in an array

#include<bits/stdc++.h>
using namespace std;

int minimizadjdiff(int a[],int n,int k)
{
	int mindiff = INT_MAX;
	for(int i=0;i<=k;i++)
	{
		int maxdiff = INT_MIN;
		for(int j=0;j<n-k-1;j++)
		{
			for(int p=i;p<=i+j;p++)
			{
				maxdiff = max(maxdiff,a[p+1]-a[p]);
			}
		}
		mindiff = min(mindiff,  maxdiff);
	}
	return mindiff;
}
int main()
{
	int n,k;
	cin>>n;
	cin>>k;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<minimizadjdiff(a,n,k);
	return 0;
}



