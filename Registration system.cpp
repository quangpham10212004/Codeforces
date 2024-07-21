#include <bits/stdc++.h>
using namespace std;
#define Max 1005
#define ll long long
#define pb push_back
#define T int

void Code()
{
    T n; cin>>n;
    map<string,T> m;
    while(n--)
    {
        string s;
        cin>>s;
        if(m[s]==0)
        {
            cout<<"OK"<<endl;
            m[s]=1;
        }
        else{
            cout<<s+to_string(m[s])<<endl;
            m[s]++;
        }
    }
}

int main()
{
    Code();
}