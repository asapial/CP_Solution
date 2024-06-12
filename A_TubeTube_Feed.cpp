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
int n,t;
cin>>n>>t;
vector<int> a(n),b(n);
for(int i=0;i<n;i++)cin>>a[i];

for(int i=0;i<n;i++)cin>>b[i];
int res=-1;

for(int i=0;i<n;i++)
{
    if(a[i]+i<=t)
    {
        if(res==-1 || b[res-1]<b[i])
        {
            res=i+1;
        }
    }
}

cout<<res<<endl;
}
return 0;
}