#include<iostream>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll minl(ll a,ll b){return (a>b?b:a);}
ll maxl(ll a,ll b){return (a<b?b:a);}
int solve(){

int num;
cin>>num;

string s;
cin>>s;

int map[26];



for (int i = 0; i < 26; i++)
{
    map[i]=-1;
}


for (int i = 0; i < num; i++)
{   int v=s[i]-'a';

    if (map[v]==-1)
    {
        map[v]=i%2;

    }
    else
    {
        if(map[v]!=(i%2))
        {
            cout<<"NO"<<endl;
            return 0;
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