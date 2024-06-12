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
string s;
cin>>s;
string str="Timur";

sort(s.begin(), s.end());
sort(str.begin(), str.end());

if (n==5)
{
    cout<<(s==str?"YES":"NO")<<endl;
}
else
{
    cout<<"NO"<<endl;
}

}
return 0;
}