//Find maximum of minimum for every window size in a given array


#include<bits/stdc++.h>
using namespace std;


void maximumofmin(int a[],int n)
{
	for(int i=0;i<=n;i++)
	{
		int maxofmin = INT_MIN;
		for(int j=0;j<n-i;j++)
		{
			int min = a[j];
			for(int k=1;k<i;k++)
			{
				if(a[j+k]<min)
				{
					min = a[j+k];
				}
			}
			if(min>maxofmin)
			{
				maxofmin = min;
			}
		}
		cout<< maxofmin;
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
	maximumofmin(a,n);
	return 0;
}
