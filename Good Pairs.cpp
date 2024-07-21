#include <bits/stdc++.h>
using namespace std;
#define Max 1005
#define ll long long
#define pb push_back
#define T int
#define el cout<<endl

void Code()
{
    T n; cin >>n;
    T a[n];
    T i1,i2;
    for(T i =0;i<n;i++)
    {
        cin>>a[i];
    }
    T maxa=*max_element(a,a+n);
    T mini=*min_element(a,a+n);
    for(T i=0;i<n;i++)
    {
        if(a[i]==mini) i1=i+1;
        if(a[i]==maxa) i2=i+1;
    }
    cout<<i1<<" "<<i2;
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