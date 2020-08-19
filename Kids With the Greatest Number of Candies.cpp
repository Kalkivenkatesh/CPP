//  Kids With the Greatest Number of Candies

class Solution {
public:
vector kidsWithCandies(vector& candies, int extraCandies) {
int n=candies.size();
int x=*max_element(candies.begin(),candies.end());
for(int i=0;i<n;i++)
candies[i]+=extraCandies;
vector a(n);
for(int i=0;i<n;i++)
{
if(candies[i]<x) a[i]=false;
else a[i]=true;
}
return a;
}
};
