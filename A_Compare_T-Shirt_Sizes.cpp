#include<iostream>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll minl(ll a,ll b){return (a>b?b:a);}
ll maxl(ll a,ll b){return (a<b?b:a);}
int solve(){
string s;
cin>>s;
int l=s.length()-1;
int t=s.length();
if (s[l]=='M')
{
    return 0;
}
else{

    return (s[l]=='S'?-t:t);
}

}
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int term;
cin>>term;
while(term--){
int a =solve();
int b= solve();

cout<< (a<b?"<\n":(a>b?">\n":"=\n"));
}
return 0;
}