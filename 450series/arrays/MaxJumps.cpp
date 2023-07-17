// #include <iostream>
#include<bits/stdc++.h>
using namespace std;
int getJumps(int arr[], int n)
{
    int pos = 0;
    int des = 0;
    int jump = 0;
    if (arr[0] == 0)
        return -1;
    if (n == 0)
        return 0;
    else
    {
        for (int i = 0; i < n-1; i++)
        {
            des = max(des, i + arr[i]);
            if (pos == i)
            {
                pos = des;
                jump++;
            }
        }
        return jump;
    }
    return jump;
}
int main()
{
    int arr[] = {1, 6, 3, 1, 5, 6};
    int size = sizeof(arr) / sizeof(int);
    cout << getJumps(arr, size);
    return 0;
}