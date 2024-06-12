#include<iostream>
#include <bits/stdc++.h>
typedef long long ll;
#define sz(x) ((int)x.size())
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define fornr(i, n) for (int i =int (n)-1; i >=0 ; i--)
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

    /*
4 3
1 3
7 9
2 5
3 6


2 9
1 4
3 7

3 5
1 4
6 7
5 5
    */

int n,k;
cin>>n>>k;

int cl,cr;
cl=cr=0;
bool ok=true;
forn(i,n)
{
    int l,r;
    cin>>l>>r;

    if (l==k)
    {
        cl++;
    }
    if (r==k)
    {
        cr++;
    }
    
    

}

if (cr&& cl)
{
    cout<<"YES"<<"\n";
}
else
{
    cout<<"NO"<<"\n";
}



}

return 0;
}
