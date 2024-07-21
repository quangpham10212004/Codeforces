#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define Mod 1000000007

void Solution()
{
    int tt; cin >>tt;
    while(tt--){
        int n; cin >>n;
        string str;cin>>str;
        set<char>st;
        int ans=0;
        for(auto it:str){
            st.insert(it);
            ans+=st.size();
        }
        cout<<ans<<endl;
    }
}

int main()
{
    Solution();
}