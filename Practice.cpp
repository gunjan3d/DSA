#include <bits/stdc++.h>
using namespace std;
// #define ll long long;
// int getDuplicate(vector<int> arr)
// {
//     int size = arr.size();
//     // cout<<size;
//     sort(arr.begin(),arr.end());
//     vector<bool> Check={0};

//     for (int i = 0; i < size; i++)
//     {
//         if (Check[arr[i]] == 0)
//         {
//             Check[arr[i]] = 1;
//             // cout<<"h";
//         }
//         else
//         {
//             // cout<<endl;
//             // for (int i = 0;i < size; i++)
//             // {
//             // cout<<Check[i];
//             // }
//             // cout<<endl;
//             return arr[i];

//         }
//     }
//     return -1;
// }
int main()
{
    // vector<int> arr;
    // arr.push_back(1);
    // arr.push_back(3);
    // arr.push_back(4);
    // arr.push_back(2);
    // arr.push_back(2);

    // // cout << getDuplicate(arr);
    // vector<bool> check(arr.size()-1,0);
    // for(int i=0;i<check.size();i++)
    // {
    //     cout<<check[i]<<" ";
    // }
    int *arr = new int[5];
    // int arr[5];
    for (int i = 0; i < 5; i++)
    {
        arr[i] = i * rand() % 50;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
    
    return 0;
}