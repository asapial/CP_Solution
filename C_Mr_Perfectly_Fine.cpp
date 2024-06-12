#include<iostream>
#include <bits/stdc++.h>
typedef long long ll;
#define all(x)     (x).begin(), (x).end()
#define rall(x)    (x).rbegin(),(x).rend()
using namespace std;
ll minl(ll a,ll b){return (a>b?b:a);}
ll maxl(ll a,ll b){return (a<b?b:a);}
int solve(){
ll n;
cin>>n;
ll s11=INT_MAX,s01=INT_MAX,s10=INT_MAX;
while(n--)
{
    int num;
    cin>>num;
    string s;
    cin>>s;

    if(s=="11") s11=minl(s11,num);
    else if(s=="01") s01=minl(s01,num);
    else if( s=="10") s10=minl(s10,num);

}

if(s11==INT_MAX && (s10==INT_MAX || s01==INT_MAX))
{
    cout<<-1<<endl;return 0;
}

cout<<minl(s11,s10+s01)<<endl;
return 0;
}
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int term;
cin>>term;
while(term--){
solve();
}
return 0;
}