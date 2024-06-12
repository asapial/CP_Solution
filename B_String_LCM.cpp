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
string a,b;
cin>>a>>b;

string m,n;
m=a,n=b;
while(1)
{
    if (m.length()==n.length())
    {
        if (m==n)
        {
            cout<<m<<endl;
            
        }
        else
        {
            cout<<-1<<endl;
        }
        break;
        
    }
    else if (m.length()<n.length())
    {
        m+=a;
    }
    else
    {
        n+=b;
    }
    
}

}
return 0;
}