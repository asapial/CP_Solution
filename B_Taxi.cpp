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

int b,c,count=0,n,l,r,sum=0;
cin>>n;
int a[5]={0};
while(n--)
{
    cin>>c;
    a[c]++;
}
c=a[1]-a[3];
sum=a[4]+a[3]+(a[2]*2+max(0,c)+3)/4;

cout<<sum;
return 0;
}