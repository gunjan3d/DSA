#include <bits/stdc++.h>
using namespace std;
int getDuplicate(vector<int> arr)
{
    int size = arr.size();
    sort(arr.begin(),arr.end());

    vector<bool> Check(INT_MAX,0);
    for (int i = 0; i < size; i++)
    {
        if (Check[arr[i]] == 0)
        {
            Check[arr[i]] = 1;
        }
        else
        {
            return arr[i];
        }
        // cout<<i<<" ";
    }
    return -1;
}
//              only works if contents of array are in the raonge of 0 to n

int GetDuplicatesOptimised(vector<int> arr)
{
    int n = arr.size();
    for(int i=0;i<n;i++)
    {
        int x = arr[i]%n;
        arr[x] += n;
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]/n >=2)
        {
            return i;
        }
    }
    return -1;
    
}
int main()
{
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(3);
    arr.push_back(9);
    arr.push_back(9);
    arr.push_back(2);

    cout << GetDuplicatesOptimised(arr)<<endl;
    
    return 0;
}