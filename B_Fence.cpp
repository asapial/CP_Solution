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
int n,k;
cin>>n>>k;

vector<int> s(n),pre(n+1);
for(int i=0;i<n;i++){
    cin>>s[i];
    pre[i+1]=pre[i]+s[i];
}
int sum=INT_MAX;

for(int i=0;i+k<=n;i++)
{
    sum=min(sum,pre[i+k]-pre[i]);
}



for(int i=0;i+k<=n;i++)
{
    if(sum==pre[i+k]-pre[i])
    {
        cout<<i+1<<endl;
        break;
    }
}
return 0;
}