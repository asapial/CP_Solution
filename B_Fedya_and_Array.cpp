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
int x,y;
cin>>x>>y;

int len=x-y;
cout<<len*2<<endl;

for(int i=x;i>=y;i--){
cout<<i<<" ";
}

for(int i=y+1;i<x;i++)
{
    cout<<i<<" ";
}
cout<<endl;
}
return 0;
}