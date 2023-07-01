#include <bits/stdc++.h>
using namespace std;
int check(vector<int> arr, int key)
{
    sort(arr.begin(), arr.end());

    if (key > arr.size())
    {
        return -1;
    }
    else
    {
        return arr[key];
    }
}
int main()
{
    vector<int> arr;
    int key;
    cin >> key;

    for (int i = 0; i < 10; i++)
    {
        arr.push_back(i);
    }

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << check(arr, key) << endl;

    return 0;
}