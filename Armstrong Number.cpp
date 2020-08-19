#include<bits/stdc++.h>
using namespace std;
int pow(int a, int b)
{
	if(b==1)
	{
		return 1;
	}
	if(b%2==0)
	{
		return pow(a,b/2)*pow(a,b/2);
	}
	else
	{
		return b*pow(a,b/2)*pow(a,b/2);
	}
	return 0;
}
int order(int x)
{
	int n=0;
	while(x!=0)
	{
		n++;
		x=x/10;
	}
	return n;
}
int main()
{
	int n;
	cin>>n;
	int num = n;
	int m = order(n);
	int temp = n, sum = 0;
	while(temp!=0)
	{
		int c = temp%10;
		sum=sum+pow(c,m);
		temp = temp/10;
		
	}
	if(sum == num)
	{
		cout<<"It is Armstrong Number";
	}
	else
	{
		cout<<"It is not Armstrong Number";
	}
	return 0;
	
}
