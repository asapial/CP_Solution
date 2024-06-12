#include<iostream>
#include <bits/stdc++.h>
typedef long long ll;
#define sz(x) ((int)x.size())
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define fornr(i, n) for (int i =int (n)-1; i >=0 ; i--)
using namespace std;
ll minl(ll a,ll b){return (a>b?b:a);}
ll maxl(ll a,ll b){return (a<b?b:a);}
void in(ll n,ll a[]){forn(i,n)cin>>a[i];}
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
ll a,b,c,count=0,n,l,r,sum=0;
a=b=0;
string s;
cin>>s;

for (ll i = 0; i < s.length(); i++)
{
    ll k=(s[i]-'0')/2;

    a= (a*10)+k;
    b= (b*10)+k;
    if ((s[i]-'0')%2)
    {
        a++;
        swap(a,b);
    }
    
    
}

cout<<a<<" "<<b<<endl;

}
return 0;
}