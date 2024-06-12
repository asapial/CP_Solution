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
ll a[num];

for(int i=0;i<num;i++)
{
    cin>>a[i];
    if(a[i]==1)
    {
        a[i]++;
    }

}

for(int i=0;i<num;i++)
{
    if(a[i+1]%a[i]==0)
    {
        a[i+1]++;
    }
}

for(int i=0;i<num;i++)
{
    cout<<a[i]<<" ";
}
cout<<endl;



}
return 0;
}