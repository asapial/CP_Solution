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
int miska,chris;
miska=chris=0;
cin>>term;
while(term--){
int a,b;
cin>>a>>b;

if (a==b)
{
    
}
else if (a>b)
{
    miska++;
}
else
{
    chris++;
}



}

if (miska==chris)
{
    cout<<"Friendship is magic!^^";
}
else if (miska>chris)
{
    cout<<"Mishka";
}
else
{
    cout<<"Chris";
}

return 0;
}