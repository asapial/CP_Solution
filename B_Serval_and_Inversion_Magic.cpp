#include<iostream>
#include <bits/stdc++.h>
typedef long long ll;
#define sz(x) ((int)x.size())
#define forn(i, n) for (int i = 0; i <int(n); i++)
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
while(term--){
int a,b,c,count=0,n,l,r,sum=0;

cin>>n;
string s;
cin>>s;

bool flag=true;
forn(i,n/2)
{
    if (s[i]!=s[n-i-1] )
    {
        if(flag)
        {
            count++;
            flag=false;
        }

    }
    else
    {
        flag=true;
    }
    
}


if (count>1)
{
    puts("No");
}
else
{
    puts("Yes");
}

}
return 0;
}