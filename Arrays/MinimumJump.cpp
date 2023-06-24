
#include <iostream>
#include "ManMadeArray.h"
using namespace std;
int main()
{
    int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    int size = SizeofAarry(arr);
    int count =0;
    for(int i=0;i<size;i = i + arr[i])
    {
        count++;
    }
    cout<<count<<endl;
    return 0;
}