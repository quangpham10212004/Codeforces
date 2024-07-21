#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <math.h>
#include <algorithm>

using namespace std;
#define Max 1005
#define ll long long
#define Mod 1000000007
#define F(i,a,b) for(ll i=(a);i<(b);i++)
#define Fr(i,a,b) for(ll i=(a);i>=(b);i++)
#define Fe(i,a,b) for(ll i=(a);i<=(b);i++)
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
        ll n;
        cin>>n;
        vector<ll> v(n);
        for(auto &x:v) cin >> x;
        vector<ll> pre(n);
        pre[0]=v[0];
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+v[i];
        }
        ll q;
        cin>>q;
        while(q--){
            ll l,u;
            cin>>l>>u;
            l--;
            ll x=u;
            if(l>0)x+=pre[l-1];
            int lb=(lower_bound(pre.begin(),pre.end(),x)-pre.begin());
            if(lb<=l){
                cout<<l+1<<" ";
            }
            else if(lb>=n){
                cout<<n<<" ";
            }
            else{
                if(abs(pre[lb]-x)<=abs(pre[lb-1]-x)){
                    cout<<lb+1<<" ";
                }
                else{
                    cout<<lb<<" ";
                }
            }
        }
        cout<<"\n";
    }
}