#include<iostream>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll minl(ll a,ll b){return (a>b?b:a);}
ll maxl(ll a,ll b){return (a<b?b:a);}
int solve(){


return 0;
}
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int term;
cin>>term;
while(term--){
int n;
string s;
cin>>n>>s;
string t="";

for (int i = n-1; i >=0; )
{   char a;
    if (s[i]=='0')
    {
        a=(char)((s[i-2]-'0')*10+(s[i-1]-'0')+96);
        i-=3;
    }
    else
    {
        a=(char)((s[i]-'0')+96);i--;
        
    }

    t+=a;
    
}
reverse(t.begin(), t.end());

cout<<t<<endl;
}
return 0;
}