#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Max 100
#define pb push_back
#define el cout<<endl
#define f(i,a,b) for(int i=a;i<b;i++)
#define fr(i,a,b) for(int i=a;i>=b;i--)

int n,a,b;
void Solve(){
    cin>>n>>a>>b;
    int result;
    if(n%2==0){
        result=min(n*a,n*b/2);   
    }
    else{
        int m=(n-1)/2;
        result=min(m*b+a,a*n);
    }
    cout<<result;
    el;
}

int main(){
    int tc; cin >>tc;
    while(tc--){
        Solve();
    }
}