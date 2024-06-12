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
int x,n;
cin>>n;
x=sqrtl(n);
cout<<x*2-(x*x>=n)-(x*x+x>=n)<<endl;
}
return 0;
}