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
int h,m,time,time_alarm;

cin>>h>>m;
time=(h*60)+m;
int ans=24*60;
while(n--)
{
    cin>>h>>m;
    time_alarm=(h*60)+m -time;

    if(time_alarm<0) time_alarm+= 24*60;
    ans=min(ans,time_alarm);

}

cout<<ans/60<<" "<<ans%60<<endl;
}
return 0;
}