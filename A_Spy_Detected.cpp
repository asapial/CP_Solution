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

map<int,int> count,ind;
int num;
cin>>num;

for (int i = 0; i < num; i++)
{
    int n;
    cin>>n;
    count[n]++;
    ind[n]=i;
}


for(auto x:count)
{
    if(x.second==1)
    {
        cout<<++ind[x.first]<<endl;
    }
}

}
return 0;
}