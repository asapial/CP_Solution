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
int a[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,51};
int i,n,m;
cin>>n>>m;
for(i=0;a[i]!=n;i++);
if(a[i+1]==m)
cout<<"YES";
else
cout<<"NO";
return 0;
}