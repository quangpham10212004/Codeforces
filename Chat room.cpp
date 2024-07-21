#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    string k = "hello";
    int j =0;
    int dem=0;
    for(int i =0;i <s.length();i++){
        if(s[i]==k[j]){
            j++; dem++;
            if(dem==5){
                break;
            }
        }
    }
    if(dem==5)cout<<"YES";
    else cout<<"NO";
}