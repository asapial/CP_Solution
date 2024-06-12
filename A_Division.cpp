#include<iostream>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll minl(ll a,ll b){return (a>b?b:a);}
ll maxl(ll a,ll b){return (a<b?b:a);}
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
int rating;
cin>>rating;
if (1900<=rating)
{
    cout<<"Division 1"<<endl;
}
else if (1600<=rating)
{
    cout<<"Division 2"<<endl;
}
else if(1400<=rating)
{
    cout<<"Division 3"<<endl;
}
else{
    cout<<"Division 4"<<endl;
}

}
return 0;
}