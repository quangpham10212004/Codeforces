#include<bits/stdc++.h>
using namespace std;
#define Max 1005
#define ll long long
#define Mod 1000000007
#define F(i,a,b) for(ll i=(a);i<(b);i++)
#define Fr(i,a,b) for(ll i=(a);i>=(b);i--)
#define pb push_back

void fast(){
    ios_base:: sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
}


int main(){
    fast();
    int tt; cin >> tt;
    while(tt--){
        ll n,k ; cin >>n >> k;
        vector<ll> v(k);
        F(i,0,k) cin >> v[i];
        sort(v.begin(), v.end());
        ll sum = 0;
        F(i,0,k-1){
            sum+=(2*v[i] - 1);
        }
        cout<<sum<<"\n";
    }
}