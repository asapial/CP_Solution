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
int b,c,count=0,n,l,r,sum=0;

cin>>n;
int a[n];

in(n,a);

bool flag=true;
for (int i = 0; i < n; i++)
{
    for (int j = i+1; j < n; j++)
    {
        if (__gcd(a[i],a[j])<=2)
        {
            cout<<"Yes"<<endl;
            flag=false;
            break;

        }
        
    }
    
    if(!flag)
    {
        break;
    }
}


if(flag)
{
    cout<<"No"<<endl;
}

}
return 0;
}