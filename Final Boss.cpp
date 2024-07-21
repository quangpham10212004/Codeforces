#include<bits/stdc++.h>
using namespace std;
#define Max 1005
#define ll long long
#define Mod 1000000007
#define F(i,a,b) for(ll i=(a);i<(b);i++)
#define Fr(i,a,b) for(ll i=(a);i>=(b);i++)
#define pb push_back
#define el endl

void fast(){
    ios_base:: sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main(){
    int tc ; cin >>tc;
    while (tc--){
        ll h,n;
        cin >> h >> n;
        ll a[n], c[n];
        F(i,0,n) cin >> a[i];
        F(i,0,n) cin >> c[i];
        ll ans = 0;
        ll l = 1, r = 1e12;
        while(l <= r){
            ll mid = (l+r)/2ll;
            ll damage = 0;
            F(i,0,n){
                ll atk = (mid + c[i] - 1)/c[i];
                damage += (atk*a[i]);
                if(damage >= h) break;
            }
            if(damage >= h){
                ans = mid;
                r= mid-1;
            }
            else{
                l = mid + 1;
            }

        }   
        cout<<ans << endl; 
    }

}