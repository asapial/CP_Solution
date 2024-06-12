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
string s;
cin>>s;
int n=s.length();
int ans=0;
if (s[0]=='_')
{
    ans++;
}
if (s[n-1]=='_')
{
    ans++;
}

for (int i = 0; i < n; i++)
{
    if(s[i]=='_' & s[i+1]=='_')
    {
        ans++;
    }
}

if (n==1 & s[0]=='^')
{
    ans++;
}
cout<<ans<<endl;
}
return 0;
}