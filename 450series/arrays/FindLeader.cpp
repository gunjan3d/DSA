#include<bits/stdc++.h>
using namespace std;
void Leader(vector<int> q)
{
    vector<int> ans;
    bool check = true;
    for(int i=0;i<q.size();i++)
    {
        check = true;
        for(int j=i+1;j<q.size();j++)
        {
            if(q[i]<q[j])
            {
                check = false;
            }
            if(!check) break;
        }
        if(check) ans.push_back(q[i]);
        // cout<<ans[i];
    }
    // ans.push_back(q[q.size()-1]);
    for(int i:ans)
    {
        cout<<i<<" ";
    }
}
// void  Leader(vector<int> q)
// {
//     int n = q.size();
//     int i=0,j=n-1;
//     vector<int> ans;
//     int maxo = INT_MIN;
//     while(j>=0)
//     {
//         if(q[j]>maxo)
//         {
//             maxo = q[j];
//             ans.push_back(maxo);
//         }
//         j--;
//     }
//     for(auto i:ans)
//     {
//         cout<<i<<" ";
//     }
// }
int main()
{
    vector<int> q;
    q.push_back(16);
    q.push_back (17);
    q.push_back(4); 
    q.push_back(3);
    q.push_back(5);
    q.push_back(2);
    Leader(q);
    return 0;
}