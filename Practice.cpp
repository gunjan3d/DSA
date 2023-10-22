#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int s = 0, e = v.size() - 1;
    int ans =0;
    while (s < e)
    {

        int length = e-s;
        int h = min(v[s], v[e]);
        int temp = h * length;
        ans = max(ans, temp);
        s++;
        e--;
        cout<<ans<<" "<<length<<" "<<h<<endl;
    }
    cout<<ans;
    return 0;
}