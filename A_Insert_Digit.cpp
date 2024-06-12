#include<iostream>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll minl(ll a,ll b){return (a>b?b:a);}
ll maxl(ll a,ll b){return (a<b?b:a);}
int solve(){
int n,d;
cin>>n>>d;
string s;
cin>>s;

for (int i = 0; i < n; i++)
{
    if (s[i]-'0'>=d)
    {
        cout<<s[i];
    }
    else
    {
        cout<<d;
        for (int j = i; j < n; j++)
        {
            cout<<s[j];
        }
        cout<<endl;
        return 0;
        
    }
    
}
cout<<d<<endl;


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