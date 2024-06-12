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
int n;
cin>>n;

if (n%2==0)
{
    cout<<"NO"<<endl;
    continue;
}
else
{
    int t=n*2;
    cout<<"YES"<<endl;
    for (int i = 1; i <=n; i+=2)
    {
        cout<<i<<" "<<t--<<endl;
    }
    for (int i = 2; i <=n; i+=2)
    {
        cout<<i<<" "<<t--<<endl;
    }

}

}
return 0;
}