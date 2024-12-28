#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int totalSlices = d * c;
    int totalDrink = k * l;


    // for each toast
    int drinksPossible = totalDrink/nl;
    int slicesPossible = totalSlices;
    int saltPossible = p/np;
    int toastsPossible = min(drinksPossible,min(slicesPossible,saltPossible));
    int ans = toastsPossible/n;
    cout<<ans;
    
    return 0;
}