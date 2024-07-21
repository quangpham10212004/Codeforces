#include <bits/stdc++.h>
using namespace  std;
#define ll long long
#define FOR(i,a,b) for(ll i=(a);i<(b);i++)
#define Mod 1000000007

void Code(){
    int n;cin>>n;
    vector<pair<ll,ll>> a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i].first;
        a[i].second=i;
    }
    sort(a.begin(),a.end());
    vector<ll> pref(n,0);
    pref[0]=a[0].first;
    for(ll i=1;i<n;i++){
        pref[i]=pref[i-1]+a[i].first;
    }
    vector<ll> ans(n,-1);
    stack<ll>st;
    for(ll i=0;i<n;i++){
        st.push(a[i].second);
        if(i==n-1 || a[i+1].first>pref[i]){
            while(!st.empty()){
                ans[st.top()]=i;
                st.pop();
            }
        }
    }
    FOR(i,0,n){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int tt;cin>>tt;
    while(tt--){
        Code();
    }
}