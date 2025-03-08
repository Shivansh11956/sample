#include "bits/stdc++.h"
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    int r = 0,b=0;

    for(int i = 0;i<n;i++){
        if(s[i]=='W'){
            if(r==0 && b!=0 || r!=0 && b==0){ cout<<"NO"<<endl; return;}
            r=0;
            b=0;
        }
        else{
            if(s[i]=='B') b++;
            else r++;
        }
    }
    if(r==0 && b!=0 || r!=0 && b==0){ cout<<"NO"<<endl; return;}
    cout<<"YES"<<endl;
}
int main(){
        int t;
        cin>>t;
        while(t--){
            solve();
        }
        return 0;
}