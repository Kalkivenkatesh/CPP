//Number of subsequences of the form a^i b^j c^k


#include<bits/stdc++.h>
using namespace std;

int countsubsequence(string s)
{
	int ac=0,bc=0,cc=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='a')
		{
			ac = (1+2*ac);
		}
		else if(s[i]=='b')
		{
			bc=(ac+2*bc);
		}
		else if(s[i]=='c')
		{
			cc=(bc+2*cc);
		}
	}
	return cc;
}

int main()
{
	string s = "abbc";
	cout<<countsubsequence(s)<<endl;
	return 0;
}
