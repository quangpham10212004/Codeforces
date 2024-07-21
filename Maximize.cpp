#include<bits/stdc++.h>
using namespace std;
#define Max 1005
#define ll long long
#define Mod 1000000007
#define F(i,a,b) for(int i=(a);i<(b);i++)
#define Fr(i,a,b) for(int i=(a);i>=(b);i++)
#define Fe(i,a,b) for(int i=(a);i<=(b);i++)
#define pb push_back

int gcd(int a, int b){
	if(b==0) return a;
	while(b)
		return gcd(b,a%b);
	
}

int main(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
	int t; cin >>t;
	while(t--){	
		int n; cin >>n;
		int x;
		int ans=0;
		F(i,n/2,n){
			if(gcd(i,n)+i>ans){
				ans=gcd(i,n)+i;
				x=i;
			}
		}
		cout<<x<<endl;
	}
}