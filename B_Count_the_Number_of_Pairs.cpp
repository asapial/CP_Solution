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
int n,k;
cin>>n>>k;
string s;
cin>>s;

int u[26]={0},l[26]={0};


for(int i=0;i<n;i++)
{
    if(islower(s[i]))
    {
        l[s[i]-'a']++;
    }
    else{
        u[s[i]-'A']++;
    }
}

int pair=0,maximization=0;

for(int i=0;i<26;i++)
{
    pair+=min(l[i],u[i]);

    maximization+=(l[i]+u[i])/2;
}
pair=min(pair+k,maximization);
cout<<pair<<endl;
}
return 0;
}