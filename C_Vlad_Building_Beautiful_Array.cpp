#include<iostream>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll minl(ll a,ll b){return (a>b?b:a);}
ll maxl(ll a,ll b){return (a<b?b:a);}
int solve(){
int n;
cin>>n;
int a[n];
int odd=0,maxi=INT_MAX;

for(int i=0;i<n;i++)
{
    cin>>a[i];
    if(a[i]%2)
    {
        odd++;
        maxi=min(maxi,a[i]);
    }
}

if(odd==0 || odd==n)
{
    cout<<"YES"<<endl;
    return 0;
}
else{

    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            if(a[i]<=maxi)
            {
                cout<<"NO"<<endl;return 0;
            }
        }
        
    }
}
cout<<"YES"<<endl;
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

