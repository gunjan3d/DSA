#include <bits/stdc++.h>
using namespace std;
// void swap(int a, int b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }
void Reverse_vector(vector<int> &arr)
{
    int s = 0, e = arr.size()-1;
    while (s < e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
    // return arr;
}
int main()
{
    vector<int> arr;

    for (int i = 0; i < 10; i++)
    {
        arr.push_back(rand());
    }

    cout << "orignal array " << endl;

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "reversed array " << endl;
    Reverse_vector(arr);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}