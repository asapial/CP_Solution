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
ll num;
cin>>num;

if (num%2)
{
    cout<<-1<<endl;
}
else
{
    ll a=(3*num)/2;
    ll b=num/2;

    if ((a^b)==num)
    {
        cout<<a<<" "<<b<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
    
}

}
return 0;
}