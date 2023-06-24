#include <bits/stdc++.h>
using namespace std;
void transfer(string &ans, string &temp)
{
    for (int i = 0; i < temp.length(); i++)
    {
        ans.push_back(temp[i]);
    }
    ans.push_back(' ');
}
int main()
{
    string str = "my name is gunjan";
    int i = 0;
    string ans;
    for (i = 0; i < str.length(); i++)
    {
        string temp = "";
        while (str[i] != ' ' && i < str.length())
        {
            temp.push_back(str[i]);
            i++;
        }
        reverse(temp.begin(), temp.end());
        // cout << temp << " ";
        transfer(ans, temp);
    }
    cout << ans;
    return 0;
}