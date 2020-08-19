#include<bits/stdc++.h>
using namespace std;

int main()
{
	int num,rem,i=0,dec=0;
	cin>> num;
	int n=num;
	while(n)
	{
		rem=n%10;
		n=n/10;
		dec = dec + rem * pow(2,i);
		i++;
	}
	cout<<dec;
	return 0;
}
