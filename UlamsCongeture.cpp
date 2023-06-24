#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter a number\n";
    cin >> num;
    int a;
    for (int i = 1; i <= num; i++)
    {
        a = i;
        cout<<i<<"->     ";
        while (i != 1)
        {
            if (i % 2 == 0)
            {
                i = i / 2;
                cout << i << " ";
            }
            else
            {
                i = i * 3;
                i++;
                cout << i << " ";
            }
        }
        i = a;
        cout << endl;
        cout << endl;
        
    }
    return 0;
}
