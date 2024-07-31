#include<bits/stdc++.h>
using namespace std;
#define Max 1005
#define ll long long
#define Mod 1000000007
#define F(i,a,b) for(ll i=(a);i<(b);i++)
#define Fr(i,a,b) for(ll i=(a);i>=(b);i--)
#define pb push_back
#define el "\n"
void fast(){
    ios_base:: sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main(){
    fast();
    int tt; cin >>tt;
    while(tt--){
        int n,k; cin >>n>>k;
        vector<string> a(n);
        for(auto &x : a){
            cin>>x;

        }
        for(int i=0;i<n;i+=k){
            for(int j=0;j<n;j+=k     ){
                cout<<a[i][j];
            }
            cout<<el;
        }
    }
}
