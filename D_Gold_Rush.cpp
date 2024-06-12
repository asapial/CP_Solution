#include<iostream>
#include <bits/stdc++.h>
typedef long long ll;
#define all(x)     (x).begin(), (x).end()
#define rall(x)    (x).rbegin(),(x).rend()
using namespace std;
ll minl(ll a,ll b){return (a>b?b:a);}
ll maxl(ll a,ll b){return (a<b?b:a);}
bool solve(int n,int m){

if(n==m)return true;
else if(n%3!=0) return false;
else return (solve(n/3,m)||solve(2*(n/3),m));
}
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int term;
cin>>term;
while(term--){
int n,m;
cin>>n>>m;

if(solve(n,m))cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
return 0;
}