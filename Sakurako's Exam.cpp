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
        int ok = 0;
        if(a%2 ==1){
            cout<<"NO"<<el;
            continue;
        }
        if(a==0 && b%2==1){
            cout<<"NO"<<el;
            continue;
        }
        cout<<"YES"<<el;
    }
}
