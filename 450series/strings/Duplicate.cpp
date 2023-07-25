#include<bits/stdc++.h>
using namespace std;
char searchDuplicate(string s)
{
    unordered_map<int,int> m;
    for(int i=0;i<s.length();i++)
    {
        m[(int)s[i]]++;
    }
    for(auto it:m)
    {
        if(it.second>1)
        {
            return it.first ;
        }
    }
    return -1;
}
int main()
{
    string s="GunjanSarode";
    cout<<searchDuplicate(s);
    return 0;
}