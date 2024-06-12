#include<iostream>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
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
ll t=n;
int p=-1;

while(n)
{
    n/=10;
    p++;
}
cout<< t- ll(powl(10, (p)))<<endl;
}
return 0;
}