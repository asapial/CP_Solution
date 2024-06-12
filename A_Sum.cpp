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
int a,b,c;
cin>>a>>b>>c;
if ((a+b==c)||(b+c==a)||(c+a==b))
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