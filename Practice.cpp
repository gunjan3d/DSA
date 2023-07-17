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
    int pivotindex = s + cnt;
    swap(arr[pivotindex], arr[s]);
    int i = s, j = e;
    while (i < pivotindex && j > pivotindex)
    {
        while (arr[i] < pivot)
        {
            /* left ka element chota h to ++ */
            i++;
        }
        while (arr[j] > pivot)
        {
            /* rihht ka element bada h to j-- */
            j--;
        }
        if (i < pivotindex && j > pivotindex)
        {
            /* loops se bahar nikalne pe swap crow */
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotindex;
}
void QuickSort(int arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int pi = Partition(arr, s, e);
    QuickSort(arr, s, pi - 1);
    QuickSort(arr, pi + 1, e);
}
int KadneAlgo(int arr[], int n)
{
    int cs = arr[0];
    int ms = arr[0];

    for (int i = 0; i < n; i++)
    {
        cs = max(cs + arr[i], arr[i]);
        ms = max(ms, cs);
    }
    return ms;
}
int main()
{
    int arr[] = {5, 4, 5, 6, 3, 328, 25, 25, 00, 12};
    int size = sizeof(arr) / sizeof(int);
    cout << "before sorting\n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\nAfter sorting\n";
    QuickSort(arr, 0, size - 1);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}