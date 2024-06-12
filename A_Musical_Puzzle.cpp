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
int n;
cin>>n;
string s;
cin>>s;
set<string> ss;
for(int i=0;i<n-1;i++)
{
    ss.insert(s.substr(i,2));

}
cout<<ss.size()<<endl;
}

return 0;
}