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
ll term;
cin>>term;
while(term--){
ll n;
cin>>n;

priority_queue<ll> p;

ll sum=0;
while(n--)
{
    int num;
    cin>>num;

    p.push(num);

    if(num==0)
    {
        sum+=p.top();

        p.pop();
    }


}

cout<<sum<<endl;
}
return 0;
}