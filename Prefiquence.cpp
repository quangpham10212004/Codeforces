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
    int t; cin>>t;
    while(t--){
        int n,m;
        cin >> n>>m;
        string a,b;
        cin >> a>>b;
        int i=0,j=0;
        while(i < n && j < m){
            if(a[i]==b[j]){
                i++;j++;
            }
            else {
                j++;
            }
        } 
        cout<<i<<endl;
    }
}