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
int n;
cin>>n;

int even=0,odd=0;
for (int i = 0; i < n; i++)
{
    int num;
    cin>>num;
    if (num%2)
    {
        odd+=num;

    }
    else
    {
        even+=num;

    }
    

}


if (even>odd)
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