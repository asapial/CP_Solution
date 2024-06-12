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
while(term--){

ll n;
cin>>n;

vector<int> even,odd;


for (int i = 1; i <=n; i++)
{
    int x;
    cin>>x;

    if (x%2)
    {
        odd.push_back(i);
    }
    else
    {
        even.push_back(i);
    }
    
}


if (odd.size()>=3)
{
    cout<<"YES"<<endl;
    cout<<odd[0]<<" "<<odd[1]<<" "<<odd[2]<<endl;
}
else if (odd.size()>=1 && even.size()>=2)
{   
    cout<<"YES"<<endl;
    cout<<odd[0]<<" "<<even[0]<<" "<<even[1]<<endl;
}
else
{
    cout<<"NO"<<endl;
}



}
return 0;
}