#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define F(i,a,b) for(ll i=(a);i<(b);i++)
#define Fr(i,a,b) for(ll i=(a);i>=(b);i++)
#define Max 1005
#define Mod 1000000007
ll a[3];
ll ans;
ll ProbA(ll a[], ll ans =1 ){
	ll mx=0;
	F(i,0,6){
		F(j,0,6){
			F(k,0,6){
				if(i+j+k > 5) continue;
				mx=max(mx,((a[0]+i)*(a[1]+j)*(a[2]+k)));
			}
		}
	}
	return mx;
}

int main(){
	ios:: sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int tt; cin >> tt;
	while(tt--){
		F(i,0,3) cin >> a[i];
		cout<<ProbA(a)<<endl;
	}
}