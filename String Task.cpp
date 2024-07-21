#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Mod 1000000007

int main(){
    string s;cin>>s;
    string result="";
    for(int i=0;i<s.size();i++){
        if(s[i]!='a'&&s[i]!='o'&&s[i]!='u'&&s[i]!='i'&&s[i]!='e'&&s[i]!='A'&&s[i]!='O'&&s[i]!='U'&&s[i]!='I'&&s[i]!='E'&&s[i]!='y'&&s[i]!='Y'){
            result=result+'.'+(char) tolower(s[i]);
        }
    }
    cout<<result;
    return 0;
}