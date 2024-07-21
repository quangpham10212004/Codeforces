#include <bits/stdc++.h>
using namespace  std;
#define ll long long
#define FOR(i,a,b) for(ll i=(a);i<(b);i++)
#define Mod 1000000007
#define pb push_back


void Code(){
    int n,m,k;
    int count=0;
    cin >>n>>m>>k;
    int b[1005],c[1005];
    for(int i=1;i<=n;i++) cin>>b[i];
    for(int i=1;i<=m;i++) cin>>c[i];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(b[i]+c[j] <=k){
                count+=1;
            }
        }
    }
    cout<<count<<endl;
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >>t;
    while(t--){
        Code();
       
    }
}