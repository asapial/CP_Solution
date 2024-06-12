#include<iostream>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll minl(ll a,ll b){return (a>b?b:a);}
ll maxl(ll a,ll b){return (a<b?b:a);}
int solve(){
int n;
cin>>n;
if(n==1)
{
    cout<<1<<endl;
    return 0;
}

if(n%2)
{
    cout<<-1<<endl;
}
else
{
    for(int i=0;i<n;i++)
    {
        if(i%2)
        {
            cout<<i<<" ";
        }
        else{
            cout<<n-i<<" ";
        }

    }
    cout<<endl;
}
return 0;
}
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int term;
cin>>term;
while(term--){
solve();
}
return 0;
}