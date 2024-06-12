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

int n;
cin>>n;

int h[n],a[n];

for (int i = 0; i < n; i++)
{
    cin>>h[i]>>a[i];
}

int count=0;
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        if(h[i]==a[j])
        {
            count++;
        }
    }
    
}

cout<<count<<endl;
return 0;
}