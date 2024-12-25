#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string>v;
    while(n--){
        string str;
        cin>>str;
        v.push_back(str);
    }
    int ans = 0;
    for(auto str:v){
        if(str[0] == '+' || str[2] == '+'){
            ans++;
        }else{
            ans--;
        }
    }
    cout<<ans;
    return 0;
}