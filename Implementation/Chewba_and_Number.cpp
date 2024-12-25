#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long x;
    cin>>x;
    string s = "";
    char arr[10] = {'0','1','2','3','4','5','6','7','8','9'};
    long long nn = x;
    while(nn>0){
        s = to_string(nn%10) + s;
        nn/=10;
    }
    // cout<<s<<endl;
    for(int i = 0;i<s.size();++i){
        char c = s[i];
        int d = c - '0';
        if(d != 0){
            int t = 9 - d;
            if(t == 0 && i == 0){
                continue;
            }
            if(t >= 0 && t <= d){
                s[i] = arr[t];
            }
        }
    }
    long long ans = 0;
    for(auto i:s){
        ans = ans * 10 + (i - '0');
    }
    cout<<ans;
    return 0;
}