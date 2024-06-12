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
int n;
cin>>n;

for(int i=0;i<n;i++)
{
    int a,b;
    cin>>a>>b;
    if(a!=b)
    {   
        cout<<"Happy Alex"<<endl;
        
        return 0;
    }
}

cout<<"Poor Alex"<<endl;

return 0;
}