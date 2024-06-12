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
int term;
cin>>term;
while(term--){
int a,b,c,count=0,n,l,r,sum=0;
cin>>n;

vector<int> v;
map<int,int> mp;
set<int> set;

for (int i = 0; i < n; i++)
{
    cin>>l;
    v.push_back(l);
    mp[v[i]]++;
    set.insert(v[i]);
    set.insert(v[i]+1);

}

for(auto x:set)
{
    int num=mp[x];
    sum+=max(0,num-count);
    count=num;
}

cout<<sum<<endl;
}
return 0;
}