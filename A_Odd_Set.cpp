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
int term;
cin>>term;
while(term--){
int n;
cin>>n;
int odd=0;
for(int i=0;i<n*2;i++)
{
    int num;
    cin>>num;
    if(num%2)
    {
        odd++;
    }
}

if(odd==n)
{
    cout<<"Yes"<<endl;
}
else
{
    cout<<"No"<<endl;
}
}
return 0;
}