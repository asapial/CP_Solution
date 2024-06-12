#include<iostream>
#include <bits/stdc++.h>
typedef long long ll;
#define all(x)     (x).begin(), (x).end()
#define rall(x)    (x).rbegin(),(x).rend()
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
int n,q;
cin>>n>>q;
int a[n],p[n];

for(int i=1;i<=n;i++)
{
    cin>>a[i];
}

set<int>s;

for(int i=n;i>0;i--)
{
    s.insert(a[i]);
    p[i]=s.size();
}

for(int i=1;i<=q;i++)
{
    int e;
    cin>>e;
    cout<<p[e]<<endl;

}
return 0;
}