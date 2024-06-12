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
int num;
cin>>num;
int count[4],ind[4][5000];

for (int i = 0; i < num; i++)
{
    int n;
    cin>>n;
    count[n]++;
    ind[n][count[n]]=i+1;
}

int o=min(count[0],min(count[1],count[2]));


cout<<o<<endl;

for (int i = 1; i <=o; i++)
{
    cout<<ind[1][i]<<" "<<ind[2][i]<<" "<<ind[3][i]<<endl;
}

return 0;
}