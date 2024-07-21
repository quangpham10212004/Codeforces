#include <bits/stdc++.h>
using namespace std;
#define MAX 100
#define ll long long
#define el cout<<endl
#define MOD 1000000007
void Code(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a<b && b<c){
        cout<<"STAIR";
    }
    else if(a<b && b > c){
        cout<<"PEAK";
    }
    else cout<<"NONE";
    el;
}
int main(){
    int t;cin>>t;
    while(t--)
    Code();
}