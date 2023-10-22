#include <bits/stdc++.h>
using namespace std;
// brute force method
vector<vector<int>> Merge(vector<vector<int>> &arr)
{
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;

    for (int i = 0; i < arr.size(); i++)
    {
        int start = arr[i][0];
        int end = arr[i][1];
        if (!ans.empty() && end <= ans.back()[1])
        {
            continue;
        }
        for(int j=i+1;j<arr.size();j++)
        {
            if(arr[j][0] <= end)
            {
                end = max(end,arr[j][1]);
            }
            else
            {
                break;
            }
        }
        ans.push_back({start,end});
    }
    return ans;
}
vector<vector<int>> merge(vector<vector<int>> &arr)
{
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;

    for (int i = 0; i < arr.size(); i++)
    {
        if(ans.empty() || ans.back()[1] < arr[i][0])
        {
            ans.push_back(arr[i]);
        } 
        else
        {
            ans.back()[1] = max(ans.back()[1],arr[i][1]);
        }
    }
    return ans;
}
int main()
{
    vector<vector<int>> arr;
    arr.push_back({1, 3});
    arr.push_back({2, 6});
    arr.push_back({2, 8});
    arr.push_back({8, 10});
    arr.push_back({15, 18});

    vector<vector<int>> ans = merge(arr);
    for(int i=0;i<ans.size();i++)
    {
        int j=0;
        cout<<"{ ";
        for(;j<2;j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<"} ";
    }

    return 0;
}