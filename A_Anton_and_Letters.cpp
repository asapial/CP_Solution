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

char a;
set<char> b;

while (cin>>a)
{
    if(a!='{' && a!='}' && a!=',')
    {
        b.insert(a);
    }
}

cout<<b.size()<<endl;

return 0;
}