#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<bool>> r(n,vector<bool>(n,true));
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            cout<<r[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}