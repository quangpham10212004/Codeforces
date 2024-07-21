#include <bits/stdc++.h>
using namespace std;
#define MAX 100
#define ll long long
#define el cout<<endl
#define MOD 1000000007
void Code(){
    int n;cin>>n;
    string s;cin>>s;
    int count=0;
    for(int i=0;i<n-1;i++){
        string t=s.substr(i,3);
        if(t=="map"||t=="pie"){
            i+=2;
            count++;
        }
    }
    cout<<count;
    el;
}
int main(){
    int t;cin>>t;
    while(t--)
    Code();
}