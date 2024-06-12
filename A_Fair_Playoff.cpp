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
int term;
cin>>term;
while(term--){
int a,b,c,d;

cin>>a>>b>>c>>d;

if(min(a,b)>max(c,d) || max(a,b)<min(c,d))
{
    cout<<"NO"<<endl;
}
else
{
    cout<<"YES"<<endl;
}
}
return 0;
}