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

string s;
cin>>s;

forn(i,s.length())
{
    if(s[i]=='4' || s[i]=='7')
    {
        count++;
    }
}


if(count==4 || count== 7)
{
    cout<<"YES"<<endl;
}
else
{
    cout<<"NO"<<endl;
}
}
return 0;
}