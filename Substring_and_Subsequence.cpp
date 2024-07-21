#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define F(i,a,b) for(int i=(a);i<(b);i++)
#define Fr(i,a,b) for(int i=(a);i>=(b);i++)
#define Max 1005
#define Mod 1000000007
string a,b;
void fast(){
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

bool contain(string a, char b){
    for(auto x: a){
        if(x ==b) return true;
    }
    return false;
}


int  minString(string a, string b){
    int n = a.length(), m= b.length();
    if(a.find(b) != string::npos || b.find(a) != string::npos){
        return max(n,m);
    }
    int ans = n + m;
    int extra = INT_MIN;
    for(int i = 0;i < m;i++){
        int tmp = 0, i_temp = i;
        for(int j = 0; j< n;j++){
            if(a[j] == b[i_temp]){
                i_temp++;
                tmp++;
            }
        }
        extra = max(extra,tmp);
    }
    return ans - extra;
}
int main(){
    fast();
    int tt; cin >>tt;
    while(tt--){

        cin >>a>>b;
        cout<<minString(a,b)<<"\n";
    }
}
