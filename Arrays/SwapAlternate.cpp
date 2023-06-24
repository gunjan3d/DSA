
#include <iostream>
using namespace std;
int main()
{
    int arr[11];
    cout << "Before swapping\n";
    for (int i = 0; i < 11; i++)
    {
        arr[i] = rand();
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 11; i = i + 2)
    {
        if (i + 1 < 11)
        {
            /* code */
            auto temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    for (int i = 0; i < 11; i++)
    {
        // arr[i]=rand();
        cout << arr[i] << " ";
    }
    return 0;
}