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
int w,h,n;
int ans=1;
cin>>w>>h>>n;
while (w%2==0)
{
    w/=2;
    ans*=2;

}

while (h%2==0)
{
    h/=2;
    ans*=2;

}


cout<<(ans<n?"NO":"YES")<<endl;
}
return 0;
}