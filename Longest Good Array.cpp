#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define F(i,a,b) for(ll i=(a);i<(b);i++)
#define Fr(i,a,b) for(ll i=(a);i>=(b);i--)
#define Max 1005
#define Mod 1000000007
#define pb push_back
#define el "\n"


int main(){
    int tt; cin >> tt;
    while(tt--){
        ll a, b;
        cin >> a >> b;
        ll dem = 0;
        ll ans;
        while(dem*(dem-1)/2 <= (b-a)){
            ans = dem;
            dem ++;
        }
        cout<<ans<<el;
    }
}
