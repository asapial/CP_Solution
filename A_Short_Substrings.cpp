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
string b;
cin>>b;

string a=b.substr(0,2);
for (int  i = 3; i < b.length(); i+=2)
{
    a+=b[i];
}

cout<<a<<endl;
}

return 0;
}