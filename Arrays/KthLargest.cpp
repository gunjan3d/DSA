
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int k = 3;
    //input
    for(int i=0;i<8;i++)
    {
        v.push_back(i*rand());
    }
    for(auto i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    //logic
    sort(v.begin(),v.end());
    for(auto i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    //o/p
    cout<<v[k-1];
    return 0;

}