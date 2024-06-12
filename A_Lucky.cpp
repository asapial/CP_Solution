#include<iostream>
#include <bits/stdc++.h>
typedef long long ll;
#define sz(x) ((int)x.size())
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define fornr(i, n) for (int i =int (n)-1; i >=0 ; i--)
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
int i=s.length();
if (((int)s[0]+(int)s[1]+(int)s[2])==((int)s[i-1]+(int)s[i-2]+(int)s[i-3]))
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