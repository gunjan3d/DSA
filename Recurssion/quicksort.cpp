#include <iostream>
using namespace std;
int Partition(int arr[], int s, int e)
{
    int pivot = arr[s];
    int cnt = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            cnt++;
        }
    }
    int PivotIndex = s + cnt;
    swap(arr[PivotIndex], arr[s]);
    int i = s, j = e;
    while (i < PivotIndex && j > PivotIndex)
    {
        /* code */
        while (arr[i] < pivot)
        {
            /* code */
            i++;
        }
        while (arr[j] > pivot)
        {
            /* code */
            j--;
        }
        if (i < PivotIndex && j > PivotIndex)
        {
            /* code */
            swap(arr[i++], arr[j--]);
        }
    }
}
void QuickSort(int arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int p = Partition(arr, s, e);
    QuickSort(arr, s, p - 1);
    QuickSort(arr, p + 1, e);
}
int main()
{
    int arr[] = {5, 2, 5465, 4, 158, 53, 54, 8, 0, 5, 5};
    int size = sizeof(arr) / sizeof(int);
    cout << "before Sorting" << endl;
    for (int i = 0; i < size; i++)
    {
        /* code */
        cout << arr[i] << " ";
    }
    cout << endl;
    QuickSort(arr, 0, size - 1);
    cout << "After Sorting" << endl;
    for (int i = 0; i < size; i++)
    {
        /* code */
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}