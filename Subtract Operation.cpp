#include <bits/stdc++.h>
using namespace std;
#define Max 1005
#define ll long long
#define pb push_back
#define T int
#define el cout<<endl

void Code()
{
    T n,m;
    cin>>n>>m;
    T a[n];
    for(T i=0;i<n;i++)
    {
        cin >>a[i];
    }
    sort(a,a+n);
    bool flag=false;
    for(T i=0;i<n;i++)
    {
        T val=a[i]+m;
        if(binary_search(a+i+1,a+n,val))
        {
            cout<<"YES";
            flag=true;
            break;
        }
    }
    if(!flag) cout<<"NO";
    el;
}

int main()
{
    T t; cin>>t;
    while(t--)
    {
        Code();
    }
}