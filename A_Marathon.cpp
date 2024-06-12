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
ll n,a[4];

ll i;
for( i=0;i<4;i++){
    cin>>a[i];
}
n=a[0];
sort(a,a+4, greater<int>());

for ( i = 0; i < 4; i++)
{   

    if (n==a[i])
    {
        break;
    }
    
}
cout<<i<<endl;

}
return 0;
}