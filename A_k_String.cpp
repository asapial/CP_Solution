#include<iostream>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll minl(ll a,ll b){return (a>b?b:a);}
ll maxl(ll a,ll b){return (a<b?b:a);}
int solve(){


return 0;
}
int k,a[200];
string s;
int main()
{
	cin>>k>>s;
	for(int i=0;i<s.size();i++)
		a[s[i]]++;
	for(int i=0;i<200;i++)
	{
		if(a[i]%k)
		{
			cout<<-1;
			return 0;
		}
	}
	for(int i=0;i<k;i++)
	{
		for(int j=0;j<200;j++)
		{
			for(int x=0;x<a[j]/k;x++)
				cout<<(char)j;
		}
	}
	return 0;