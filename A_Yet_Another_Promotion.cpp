#include<iostream>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll minl(ll a,ll b){return (a>b?b:a);}
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
ll n,m,a,b;

cin>>a>>b;
cin>>n>>m;

ll x,y;
x=n/(m+1);
y=n-(x*(m+1));
cout<<(x*minl(a*m,b*(m+1)))+y*minl(a,b)<<endl;

}
return 0;
}

