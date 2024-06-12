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

int a,b,c,d;
cin>>a>>b>>c>>d;

string s;
cin>>s;
int m,n,o,p;
m=n=o=p=0;
for (int i = 0; i < s.length(); i++)
{
    if (s[i]=='1')
    {
        m++;
    }
    else if (s[i]=='2')
    {
        n++;
    }
    else if(s[i]=='3')
    {
        o++;
    }
    else
    {
        p++;
    }
    
}


cout<<(m*a)+(n*b)+(o*c)+(p*d)<<endl;

return 0;
}