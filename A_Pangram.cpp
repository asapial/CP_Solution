#include<iostream>
#include <bits/stdc++.h>
typedef long long ll;
#define sz(x) ((int)x.size())
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define fornr(i, n) for (int i =int (n)-1; i >=0 ; i--)
using namespace std;
ll minl(ll a,ll b){return (a>b?b:a);}
ll maxl(ll a,ll b){return (a<b?b:a);}
void in(int n,int a[]){forn(i,n)cin>>a[i];}
void inl(ll n,ll a[]){forn(i,n)cin>>a[i];}
int solve(){


return 0;
}
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int term;
cin>>term;
string s;
cin>>s;

transform(s.begin(),s.end(),s.begin(),::tolower);

int a[26];
forn(i,26) a[i]=0;

forn(i,term)
{
    a[s[i]-'a']++;
}

if (term<26)
{
    cout<<"NO"<<endl;
    return 0;
}
else
{
    forn(i,26)
    {
        if(a[i]==0)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
}

cout<<"YES"<<endl;
return 0;
}