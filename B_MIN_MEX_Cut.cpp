#include<iostream>
#include <bits/stdc++.h>
typedef long long ll;
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

int zeros=count(s.begin(), s.end(),'0');
if (zeros==0)
{
    cout<<0<<endl;
    continue;
}

int l=s.find('0');
int r=s.rfind('0');

if (r-l+1==zeros)
{
    cout<<1<<endl;
}
else
{
    cout<<2<<endl;
}


}
return 0;
}