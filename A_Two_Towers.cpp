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
int n,m;
cin>>n>>m;
string ns,ms;
cin>>ns>>ms;
reverse(ms.begin(),ms.end());
ns=ns+ms;
int count=0;
int val;
forn(i,m+n-1)
{
    if(ns[i]==ns[i+1])
    {
        count++;
        val=i;
    }
}

if (count==0)
{
    cout<<"YES"<<endl;
}
else if (count==1)
{   // BRBR RRBRBRB

    if (ns[val+1]==ns[val+2])
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    
}
else
{
    cout<<"NO"<<endl;
}


}
return 0;
}