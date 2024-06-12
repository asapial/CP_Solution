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
ll a,b,c;
cin>>a>>b>>c;
ll count = (a+b+c)/9;

if ((a+b+c)%9==0 && a>=count && b>=count && c>=count)
{
    cout<<"YES"<<endl;
}
else
{
    cout<<"NO"<<endl;
}

}
return 0;
}