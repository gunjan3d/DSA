#include<bits/stdc++.h>
using namespace std;
void Pro(vector<int>& arr)
{
    int n = arr.size();
    int pro = 1;
    for(int i=0;i<n;i++)
    {
        pro *= arr[i];
    }
    cout<<pro<<endl;
    for(int i=0;i<n;i++)
    {
        arr[i] = pro/arr[i];
    }
}
int main()
{
    vector<int> arr{5,2,3,1,4,5,4};
    Pro(arr);
    for(auto i:arr)
    {
        cout<<i<<" ";
    }
    return 0;
}