#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define Mod 1000000007

void Solution()
{
    int tt; cin >> tt;
    while(tt--){
        string s; cin >>s;
        if(s.length() <=10) cout<<s<<endl;
        else
            cout<<s[0]<<s.length()-2<<s[s.length() - 1]<<endl;
    }
}

int main()
{
    Solution();
}