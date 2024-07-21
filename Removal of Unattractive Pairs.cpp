#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Mod 1000000007


int main(){
    int tt;cin>>tt;
    while(tt--){
        ll n, maxFreq = 0;
        cin>>n;
        string s;
        cin>>s;
        map<char,ll> m;
        for(ll i=0;i<n;i++){
            m[s[i]] ++;
            maxFreq=max(maxFreq, m[s[i]]);
        } 
        if(maxFreq > n/2){
            cout<<(n-(n-maxFreq)*2)<<endl;
        }
        else{
            cout<<n%2<<endl;
        }
    }
    return 0;
}