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
int num;
cin>>num;

int max,min;
max=0;min=INT_MAX;
for (int i = 0; i < num; i++)
{
    int n;
    cin>>n;

   if(n>max)
   {
    max=n;
   }
   if (n<min)
   {
     min=n;
   }
   
    
}

cout<<max-min<<endl;
}
return 0;
}