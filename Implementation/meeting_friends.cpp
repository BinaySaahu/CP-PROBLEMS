#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,x2,x3;
    cin>>x1>>x2>>x3;
    int low = min(x1,min(x2,x3));
    int high = max(x1,max(x2,x3));
    int midFriend;
    if(x1 >= low && x1 < high){
        midFriend = x1;
    }
    else if(x2 >= low && x2 < high){
        midFriend = x2;
    }
    else if(x3 >= low && x3 < high){
        midFriend = x3;
    }
    int mid = (low + high)/2;
    int ans = (mid-low) + (high - mid) + abs(mid - midFriend);
    cout<<ans;

    return 0;
}