#include<iostream>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve(){



}
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int n,a,b,c,i=0;

	cin>>n;
	while(i<n)
	{
		cin>>a;
		b=max(b,a);
		c+=a;
		i++;
	}
	cout<<b*n-c;
return 0;
}