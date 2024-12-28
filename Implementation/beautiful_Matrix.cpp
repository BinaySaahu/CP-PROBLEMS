#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r = 5;
    int c = 5;
    int reqRow = 0;
    int reqCol = 0;
    vector<vector<int>>mat(5,vector<int>(5));
    for(int i = 0;i<r;++i){
        for(int j = 0;j<c;++j){
            int val;
            cin>>val;
            if(val == 1){
                reqRow = i;
                reqCol = j;
            }
            mat[i][j] = val;
        }
    }
    int ans = abs(2 - reqRow) + abs(2 - reqCol);
    cout<<ans;
    return 0;
}