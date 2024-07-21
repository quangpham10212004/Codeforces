#include <bits/stdc++.h>
using namespace std;
#define MAX 100
#define ll long long
#define endl "\n"
#define MOD 1000000007
#define F(i,a,b) for(int i=(a);i<(b);i++)
#define Fr(i,a,b) for(int i=(a);i>=(b);i--)
#define Fe(i,a,b) for(int i=(a);i<=(b);i++)

int main(){
    int t; cin>>t;
    while(t--){
        int n;cin>>n;
        set<int> s;
        F(i,0,n){
            int x;
            cin >> x;
            s.insert(x);
        }
        cout<<s.size()<<endl;
    }
}