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
int a,b;
cin>>a>>b;
if (2*a>b)
{
    cout<<-1<<" "<<-1<<endl;
}
else
{
    cout<<a<<" "<<2*a<<endl;
}

}
return 0;
}