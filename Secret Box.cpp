#include <iostream>
#include <string>
#include <math.h>
using namespace std;
#define ll long long
#define F(i,a,b) for(int i=(a);i<(b);i++)
#define Fr(i,a,b) for(int i=(a);i>=(b);i--)
#define Max 1005
#define Mod 1000000007
#define pb push_back
void fast(){
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}


int main(){
    fast();
    int tt; cin >>tt;
    while(tt--){
        ll X,Y,Z,k;
        cin >>X>>Y>>Z>>k;
        ll ans = 0;
        F(x,1,X+1){
            F(y,1,Y+1){
                if(x*y>k) continue;
                if(k%(x*y)) continue;
                ll z= k/(x*y) ;
                if(z > Z) continue;
                ll temp = (X-x + 1)*(Y-y + 1)*(Z-z+1);
                ans=max(ans,temp);
            }
        }
        cout<<ans<<"\n";
    }
}
