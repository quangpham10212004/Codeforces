#include<bits/stdc++.h>
using namespace std;
#define Max 1005
#define ll long long
#define Mod 1000000007
#define F(i,a,b) for(int i=(a);i<(b);i++)
#define Fr(i,a,b) for(int i=(a);i>=(b);i++)
#define pb push_back
void fast(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void Solve(){
		ll n;
        string s;
        cin>>n;
        cin>>s;
        ll diffCnt = 0;
        for(ll len = 1; len <= n ; len++) {
            if(n%len == 0) {
                diffCnt = 0;
                for(ll preIdx = 0; preIdx < len; preIdx++) {
                    for(ll otherIdx = preIdx+len; otherIdx < n; otherIdx+=len) {
                        if(s[preIdx]!=s[otherIdx]) {
                            diffCnt++;
                        }
                    }
                }
                if(diffCnt <= 1) {
                    cout<<len;
                    break;
                }
                diffCnt = 0;
                for(ll sufIdx = n-len; sufIdx < n; sufIdx++) {
                    for(ll otherIdx = sufIdx-len; otherIdx >= 0; otherIdx-=len) {
                        if(s[sufIdx]!=s[otherIdx])
                            diffCnt++;
                    }
                }
                if(diffCnt <= 1) {
                    cout<<len;
                    break;
                }
            }
        }
        cout<<endl;
}

int main(){
	fast();
	int tc; cin>>tc;
	while(tc--){
		Solve();
	}
	return 0;
}