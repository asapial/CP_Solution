#include<iostream>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int solve(int n){

    int ans=0;

    while(n)
    {
        ans+=n%10;
        n/=10;
    }

return ans;
}
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int num;
cin>>num;
int ans=0;

while (num)
{
    ans++;

    if(solve(ans)==10) num--;
}
cout<<ans<<endl;
return 0;
}