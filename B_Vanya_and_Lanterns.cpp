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
int n,l,i=0;
int a[10005];
int m;

cin>>n>>l;
	for(;i<n;i++) cin>>a[i];
	sort(a,a+n);
	m=max(a[0],l-a[n-1])*2;
	for(i=1;i<n;i++) m=max(m,a[i]-a[i-1]);
	printf("%lf",m/2.0);

return 0;
}