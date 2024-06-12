#include<iostream>
#include <bits/stdc++.h>
typedef long long ll;
#define sz(x) ((int)x.size())
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
int a[n];
map<int,int> c;

for (int i = 0; i < n; i++)
{
    cin>>a[i];
   
}
int count = 0;


for (int i = n-1; i >=0; i--)
{
    if (c[a[i]]==0)
    {
        count++;
    }
    else
    {
        break;
    }

    c[a[i]]++;
    
}

cout<<n-count<<endl;
}
return 0;
}