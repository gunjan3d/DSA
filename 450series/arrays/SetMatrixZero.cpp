#include<bits/stdc++.h>
using namespace std;
void setZeros(vector<vector<int>> &matrix)

{

    int n=matrix.size();

    int m=matrix[0].size();

    vector<int>row(n,0);

    vector<int>col(m,0);

    for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){

            if(matrix[i][j]==0){

                row[i]=1;

                col[j]=1;

            }

        }

    } 

 

    for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){

            if(row[i] or col[j]){

                matrix[i][j]=0;

            }

        }

    } 

}
int main(){
    vector<vector<int>> v;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            v[i][j] = 1;
        }
    }
    v[0][0]=0;
    setZeros(v);
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}