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
int n;
cin>>n;
pair<int,int> a[5001];

for(int i=0;i<n;i++) cin>>a[i].first>>a[i].second;

// sort(a,a+n);
int ans=-1;

for(int i=0;i<n;i++)
{
    if(ans<=a[i].second)
    {
        ans=a[i].second;
    }
    else{
        ans=a[i].first;
    }
}

cout<<ans<<endl;
return 0;
}