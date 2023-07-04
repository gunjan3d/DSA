#include <bits/stdc++.h>
using namespace std;
int SumOfArray(int *arr, int size)
{
    if (size == 0)
    {
        return 0;
    }
    if (size == 1)
    {
        return arr[0];
    }
    int ans = arr[0] + arr[1];

    int sum = ans + SumOfArray(arr + 2, size - 2);
    return sum;
}
int main()
{
    int arr[5] = {5, 10, 4, 1, 10};
    // for (int i = 0; i < 10; i++)
    // {
    //     arr.push_back(rand() % 98 + 1);
    // }
    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int ans = SumOfArray(arr, 5);
    cout << ans;
    return 0;
}