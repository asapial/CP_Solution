#include<iostream>
#include <bits/stdc++.h>
typedef long long ll;
#define sz(x) ((int)x.size())
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define fornr(i, n) for (int i =int (n)-1; i >=0 ; i--)
using namespace std;
ll minl(ll a,ll b){return (a>b?b:a);}
ll maxl(ll a,ll b){return (a<b?b:a);}
void in(int n,int a[]){forn(i,n)cin>>a[i];}
void inl(ll n,ll a[]){forn(i,n)cin>>a[i];}
int solve(){


return 0;
}
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

ll a,b,c,count=0,n,l,m,r,sum=0;

cin>>n>>m;

map<string,string> mp;
string s,t;
for (int i = 1; i <=m; i++)
{
    
    cin >> s >> t;

    mp[s]=s.length()<=t.length()?s:t;
}

forn(i,n)
{
    cin>>s;
    cout<<mp[s]<<" ";
}
return 0;
}