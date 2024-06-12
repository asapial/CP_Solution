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
int term;
cin>>term;
while(term--){
int n;
cin>>n;
int ans=0;
int res=0;
while (n--)
{   
    int num;
    cin>>num;
    if(num==0)
    {
        ans++;
    }
    else{
        ans=0;
    }
    res=max(ans,res);

}

cout<<res<<endl;
}
return 0;
}