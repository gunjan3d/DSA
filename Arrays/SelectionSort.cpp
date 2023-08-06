#include<bits/stdc++.h>
using namespace std;
void Selection(vector<int> &arr,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
            }
        }
    }
}
int main()
{
    vector<int> arr;
    for(int i=0;i<10;i++)
    {
        arr.push_back(rand()%50 * (i+1));
    }
    Selection(arr,arr.size());
    for(auto i:arr)
    {
        cout<<i<<" ";
    }
    return 0;
}