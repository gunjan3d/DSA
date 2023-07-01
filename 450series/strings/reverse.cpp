#include <bits/stdc++.h>
using namespace std;
void reverseString(string &str)
{
    int s = 0;
    int e = str.length();
    while (s < e)
    {
        swap(str[s], str[e]);
        s++;
        e--;
    }
}
int main()
{
    string str;
    getline(cin, str);
    reverseString(str);
    cout << endl << str << endl;
    return 0;
}