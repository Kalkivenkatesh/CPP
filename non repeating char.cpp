//Queue based approach for first non-repeating character in a stream


#include<bits/stdc++.h>
using namespace std;
const int MAX_CHAR = 26;
void firstnonrepeating(char str[])
{
	queue<char> q;
	int charcount[MAX_CHAR]={0};
	for(int i=0;str[i];i++)
	{
		q.push(str[i]);
		charcount[str[i]-'a']++;
		while(!q.empty()){
			if(charcount[q.front() - 'a']>1)
			{
				q.pop();
				
			}
			else
			{
				cout<<q.front()<<" ";
				break;
			}
		}
		if(q.empty())
		{
			cout<<-1<<" ";
		}
	}
	cout<<endl;
}
int main()
{
	char str[] = "aabc";
	firstnonrepeating(str);
	return 0;
}
