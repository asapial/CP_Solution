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
while(term--){
ll a,b,c,count=0,n,l,r,sum=0;
cin>>n;
string s;
cin>>s;
l=r=0;
for (int i = 0; i < s.length(); i++)
{
    if (s[i]=='(')
    {
        sum++;
    }
    else
    {
        sum--;

        if(sum<0)
        {
            sum=0;
            count++;
        }
    }
    
}

cout<<count<<endl;

}
return 0;
}