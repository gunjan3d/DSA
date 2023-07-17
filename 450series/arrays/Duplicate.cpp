#include <bits/stdc++.h>
using namespace std;
int getDuplicate(vector<int> arr)
{
    int size = arr.size();
    vector<bool> Check={0};
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
    }
    return -1;
}
int main()
{
    vector<int> arr;
    arr.push_back(5);
    arr.push_back(2);
    arr.push_back(5);
    arr.push_back(1);
    arr.push_back(0);

    cout << getDuplicate(arr);
    return 0;
}