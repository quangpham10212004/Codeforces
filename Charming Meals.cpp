#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#pragma GCC optimize("03,unroll-loops")
#pragma GCC target("avx2")
#define ll long long
#define el "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
ll mod=1e9+7;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;









void fast(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
}




int main(){
	fast();
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		ll a[n],b[n];
		for(int i=0;i<n;++i) cin>>a[i];
		for(int i=0;i<n;++i) cin>>b[i];
		sort(a,a+n);
		sort(b,b+n);
		ll ans=0;
		for(int i=0;i<n;++i){
			ll mi=1e9+7;
			ll pos=i;
			for(int j=0;j<n;++j){
				ll x=abs(a[pos]-b[j]);
				mi=min(mi,x);
				pos++;
				if(pos==n) pos=0;
			}
			ans=max(ans,mi);
		}
		cout<<ans<<el;
		
	}
}