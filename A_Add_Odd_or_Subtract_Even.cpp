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
int a,b;
cin>>a>>b;

if (a==b)
{
    cout<<0<<endl;
}
else if ((a>b&&(a-b)%2==0)||(a<b&&(b-a)%2==1))
{
    cout<<1<<endl;
}
else
{
    cout<<2<<endl;
}


}
return 0;
}