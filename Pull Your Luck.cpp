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
		ll n,x,p; cin>>n>>x>>p;
		ll ok=0;
		for(ll i=1;i<=2*n&&i<=p;++i){
			ll tmp=x;
			tmp+=i*(i+1)/2;
			if(tmp%n==0){
				ok=1; break;
			}
		}
		if(ok) cout<<"YES\n";
		else cout<<"NO\n";
		
	}
}