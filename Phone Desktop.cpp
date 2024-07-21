#include<bits/stdc++.h>
using namespace std;
#define Max 1005
#define ll long long
#define Mod 1000000007
#define F(i,a,b) for(int i=(a);i<(b);i++)
#define Fr(i,a,b) for(int i=(a);i>=(b);i++)
#define Fe(i,a,b) for(int i=(a);i<=(b);i++)
#define pb push_back

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tc; cin >>tc;
	while(tc--){
		int x,y;cin>>x>>y;
		int ans=(y+1)/2;
		int rem=y/2*7+y%2*11;
		x=max(0,x-rem);
		ans+=(x+14)/15;
		cout<<ans<<endl;
	}
}