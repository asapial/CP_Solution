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
int n;
cin>>term>>n;
bool ok=true;
while (term--)
{
    for (int i = 0; i < n; i++)
    {
        char c;
        cin>>c;
        if (c=='C'||c=='M'||c=='Y')
        {
            ok=false;

        }
      
        
    }
}


if (ok)
{
    cout<<"#Black&White"<<endl;
}
else
{
    cout<<"#Color"<<endl;
}

return 0;
}