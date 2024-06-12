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
int len,digit_sum;
cin>>len>>digit_sum;

int k=digit_sum;
if ((len>1 && digit_sum<1) || digit_sum>len*9)
{
    cout<<"-1 -1"<<endl;
}
else
{
    for(int i=len-1;i>=0;i--)
    {
        int j=max(0,k-9*i);
        if(j==0  && i==len-1 && k)j=1;
        cout<<j;
        k-=j;

    }

    cout<<" ";

    k=digit_sum;
    for(int i=len-1;i>=0;i--)
    {
        int j=min(9,k);
        cout<<j;
        k-=j;
    }
}

return 0;
}