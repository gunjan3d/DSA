#include <iostream>
using namespace std;
bool IsSorted(int arr[], int size)
{
    if (size <= 1)
    {
        return true;
    }

    if (arr[0] > arr[1])
    {
        return false;
    }

    else
    {
        bool RemainingPart = IsSorted(arr + 1, size - 1);
        return RemainingPart;
    }
}
int main()
{
    int arr[5] = {1, 3, 20, 6, 8};
    bool sorted = IsSorted(arr, 5);
    if (sorted)
    {
        cout << "array is sorted \n";
    }
    else
    {
        cout << " array is not sorted\n";
    }
    return 0;
}