#include<iostream>
#include <bits/stdc++.h>
typedef long long ll;
#define sz(x) ((int)x.size())
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define fornr(i, n) for (int i =int (n)-1; i >=0 ; i--)
using namespace std;
ll minl(ll a,ll b){return (a>b?b:a);}
ll maxl(ll a,ll b){return (a<b?b:a);}
void in(int n,int a[]){forn(i,n)cin>>a[i];}
void inl(ll n,ll a[]){forn(i,n)cin>>a[i];}
int solve(){


return 0;
}
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int term;
cin>>term;
int count=0;
while(term--){
string s;
cin>>s;
if (s=="Icosahedron")
{
    count+=20;
}
else if (s=="Cube")
{
    count+=6;
}
else if (s=="Tetrahedron")
{
    count+=4;
}
else if(s=="Dodecahedron")
{
    count+=12;
}
else
{
    count+=8;
}

}

cout<<count<<endl;

return 0;
}