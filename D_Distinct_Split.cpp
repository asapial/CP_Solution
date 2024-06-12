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

int num;
cin>>num;
string s;
cin>>s;

vector<int> pre(num,0),suf(num,0);
set<char> a;

for (int i = 0; i < num; i++)
{
    a.insert(s[i]);
    pre[i]=a.size();

}

a.clear();
for (int i = num-1; i >-1; i--)
{
    a.insert(s[i]);
    suf[i]=a.size();
}

int ans=0;
for (int i = 0; i < num-1; i++)
{
    ans=max(ans,pre[i]+suf[i+1]);
}

cout<<ans<<endl;

}
return 0;
}