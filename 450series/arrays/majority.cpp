#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    for(int i=0;i<15;i++)
    {
        v[i] = rand()%3 + i;
    }
    sort(v.begin(),v.end());
    cout<<v[v.size()/2];
    return 0;;
}