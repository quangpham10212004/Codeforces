#include <bits/stdc++.h>
using namespace std;

#define Max 1005
#define ll long long
#define Mod 1000000007
#define F(i,a,b) for(int i=(a);i<(b);i++)
#define Fr(i,a,b) for(int i=(a);i>=(b);i++)
#define Fe(i,a,b) for(int i=(a);i<=(b);i++)
#define pb push_back


int main()
{
	int tc; cin >>tc;
	while(tc--)
	{
		int n; cin >>n;
		string s;
		cin >> s;
		int cnt=0;
		int len=s.length();
		F(i,0,len)
		{
			if(s[i]=='U') cnt+=1;
		}
		if(cnt%2==0){
			cout<<"NO";
		}
		else cout<<"YES";
		cout<<endl;
	}
}