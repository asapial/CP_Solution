#include<iostream>
#include <bits/stdc++.h>
typedef long long ll;
#define sz(x) ((int)x.size())
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
string s;
cin>>s;
ll n=sz(s);



if (s[1]=='a')
{
    cout<<s[0]<<" "<<s[1]<<" "<<s.substr(2,n-1)<<endl;
}
else
{
    cout<<s[0]<<" "<<s.substr(1,n-2)<<" "<<s[n-1]<<endl;
}

}
return 0;
}