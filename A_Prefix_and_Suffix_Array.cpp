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
ll num;
cin>>num;

ll loop=2*num-2;
string st="";
while(loop)
{   

    string s;
    cin>>s;
    ll len=s.length();
    if(len==(num+1)/2)
    {
        st+=s;
    }
    loop--;
}

string result=st;

reverse(result.begin(),result.end());

if (result==st)
{
    cout<<"YES"<<endl;
}
else
{
    cout<<"NO"<<endl;
}

}
return 0;
}