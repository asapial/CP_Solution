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
int n,m;
cin>>n>>m;

string odd, even;


for (int i = 0; i < m-1; i++)
{
    odd+='#',even+='.';
}
odd+='#';


for (int i = 1; i <= n; i++)
{
    if (i%2)
    {
        cout<<odd<<endl;
    }
    else
    {
        if (i%4==0)
        {   
            cout<<'#'<<even<<endl;
        }
        else
        {
            cout<<even<<'#'<<endl;
        }
        
    }
    
}

return 0;
}