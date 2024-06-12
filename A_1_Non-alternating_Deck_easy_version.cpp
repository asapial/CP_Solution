#include<iostream>
#include <bits/stdc++.h>
typedef long long ll;
#define sz(x) ((int)x.size())
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define fornr(i, n) for (int i =int (n)-1; i >=0 ; i--)
using namespace std;
ll minl(ll a,ll b){return (a>b?b:a);}
ll maxl(ll a,ll b){return (a<b?b:a);}
void in(ll n,ll a[]){forn(i,n)cin>>a[i];}
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
int a,b,c,count=0,n,ar[n],br[n],cr[n],l,r,sum=0;
cin>>n;

a=b=0;
bool ok=true;
for ( int i = 0; n; i++)
{   int num;

    if ((4*i)+1 <=n)
    {
        num=(4*i)+1;
    }
    else
    {
        num=n;
    }
    
    if (ok)
    {   
        ok=false;
        a+=num;
        n-=num;
    }
    else
    {   ok=true;
        b+=num;
        n-=num;
    }
    
}

cout<<a<<" "<<b<<endl;
}
return 0;
}