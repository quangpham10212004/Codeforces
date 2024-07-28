#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define F(i,a,b) for(ll i=(a);i<(b);i++)
#define Fr(i,a,b) for(ll i=(a);i>=(b);i--)
#define Max 1005
#define Mod 1000000007
#define pb push_back
#define el "\n"
void fast(){
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main(){
    fast();
    int tt; cin >>tt;
    while (tt--){
        /* code */
        int n; cin >>n;
        if(n<4)cout<<n/2<<el;
        else{
            int a=n/4;
            cout<<(n-a*4)/2+a<<el;
        }
    }
    
}
