#include<iostream>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll minl(ll a,ll b){return (a>b?b:a);}
ll maxl(ll a,ll b){return (a<b?b:a);}
int solve(){
string a,b;
cin>>a>>b;

int m=a.length(),n=b.length();

if(a[0]==b[0])
{
    cout<<"YES\n"<<a[0]<<"*"<<endl;
    return 0;
}
else if(a[m-1]==b[n-1])
{
    cout<<"YES\n*"<<a[m-1]<<endl;
    return 0;
}
else{

    for (int i = 0; i < m-1; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if(a[i]==b[j] && a[i+1]==b[j+1])
            {
                cout<<"YES\n*"<<a[i]<<a[i+1]<<"*"<<endl;
                return 0;
            }
        }
        
    }

    cout<<"NO\n";
    
}

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