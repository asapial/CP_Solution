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

char pre=s[0];
int c[26];
memset(c,0,sizeof(c));
c[s[0]-'A']=1;
bool ok=true;

for (int i = 1; i < n; i++)
{
    if (c[s[i]-'A']==0 || pre==s[i])
    {
        c[s[i]-'A']=1;
    }
    else
    {
        ok=false;
    }
        pre=s[i];
}


if (ok)
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