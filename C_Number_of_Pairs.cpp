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
ll term;
cin>>term;
while(term--){
ll b,c,count=0,n,l,r,sum=0;

cin>>n>>l>>r;

ll a[n];

inl(n,a);

sort(a,a+n);


ll x,y;

x=0;y=n-1;

ll sl=0,sr=0;
while(x<y)
{
	sum=a[x]+a[y];

	if(sum<l)
	{
		sl+=y-x;
		x++;
	}

	if(sum>=l)
	{
		y--;
	}
}


x=0;y=n-1;


while(x<y)
{
	sum=a[x]+a[y];

	if(sum<=r)
	{
		sr+=y-x;
		x++;
	}

	if(sum>r)
	{
		y--;
	}
}

cout<<sr-sl<<endl;
}
return 0;
}