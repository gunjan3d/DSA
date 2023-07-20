#include<bits/stdc++.h>
using namespace std;
int peak(vector<int>&v)
{
    int n = v.size();
    int cp=0,mp=0;
    for(int i=0;i<n-1;i++)
    {
        if(v[i]<=v[i+1])
        {
            cp = v[i+1];
            if(mp<cp)
            {
                mp = cp;
            }
        }
    }
    return mp;
}
int main()
{
    vector<int> v;
    v.push_back(8);
    v.push_back(9);
    v.push_back(10);
    v.push_back(2);
    v.push_back(5);
    v.push_back(6);
    cout<<peak(v);
    return 0;
}