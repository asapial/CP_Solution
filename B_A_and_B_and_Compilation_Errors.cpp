#include<iostream>
#include <bits/stdc++.h>
typedef long long ll;
#define all(x)     (x).begin(), (x).end()
#define rall(x)    (x).rbegin(),(x).rend()
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
ll n;
cin>>n;

ll r1,r2;
ll s1,s2,s3;
s1=s2=s3=0;
 ll num;
for(int i=0;i<n;i++)
{
   
    cin>>num;
    s1+=num;
}

for(int i=0;i<n-1;i++)
{
    cin>>num;
    s2+=num;
}

for(int i=0;i<n-2;i++)
{
    cin>>num;
    s3+=num;
    
}

cout<<s1-s2<<endl<<s2-s3<<endl;

return 0;
}