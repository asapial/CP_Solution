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
int a,b,c,count=0,n,l,r,sum=0;

cin>>n;
int ar[n];

for (int i = 0; i < n; i++)
{
    cin>>ar[i];

    if (ar[i]==2)
    {
        sum++;
    }
    
}

int ans=-1;
for (int i = 0; i < n; i++)
{
    if (ar[i]==2)
    {
        count++;
    }

    if ((count*2)==sum)
    {
        ans=i+1;
        break;
    }
    
    
}

cout<<ans<<endl;
}
return 0;
}