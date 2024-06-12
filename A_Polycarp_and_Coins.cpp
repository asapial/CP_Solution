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
int n;
cin>>n;
int a=n/3,b=n/3;

if (n%3==1)
{
    a++;
    
}

if (n%3==2)
{
    b++;
}

cout<<a<<" "<<b<<endl;
}
return 0;
}