#include "bits/stdc++.h"
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin>>n;
    ll arr[n];
    for(int i = 0;i<n;i++) cin>>arr[i];

    ll i = 1,j=n-2;
    ll ans = 0;
    ll o = arr[0],s=arr[n-1];
    ll cnt = 2;
    while(cnt<n){
        if(o==s){
            ans = max(ans,i+n-1-j);
            // cout<<ans<<endl;
        }
        if(o <= s){
          o+= arr[i];
          i++;
          cnt++;
        }else{
          s+=arr[j];
          j--;
          cnt++;
        }
    } 
    if(o==s){
            ans = max(ans,i+n-1-j);
    }
    cout<<ans<<endl;
     
}
int main(){
        int t;
        cin>>t;
        while(t--){
            solve();
        }
        return 0;
}