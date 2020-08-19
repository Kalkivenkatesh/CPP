// Roman to integer


class Solution {
public:
    int romanToInt(string s) {
        map<char,int> m;
        m['I']=1;
        m['V']=5;
        m['X']=10;
        m['L']=50;
        m['C']=100;
        m['D']=500;
        m['M']=1000;
        int ans=0;
        int curr=0;
        for(int i=s.length()-1;i>=0;i--)
        {
            if(m[s[i]]>=curr)
                ans+=m[s[i]];
            else
                ans-=m[s[i]];
            curr=m[s[i]];
                
        }
        return ans;
    }
};
