#include <iostream>
#include <string>
#include<vector>
using namespace std;


const string base16 = "0123456789ABCDEF";



string encode(int value) {
    string encoded;
    while (value ) {
        encoded = base16[value % 16] + encoded;
        value /= 16;
    }
    return encoded;
}

int main() {
    int number ;
   
    for(int i=0;i<=16;i++)
    {
        cout<<encode(i)<<" ";
    }
    cout<<endl;
    vector<int> v(10 , 5);

    for(auto i:v)
    {
        cout<<i<<" ";
    }
    return 0;
}
