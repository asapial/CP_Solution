#include <bits/stdc++.h>
using namespace std;
#define   Pi     2*acos(0.0)
#define   ll     long long
#define   pb     push_back
#define   mp     make_pair
#define   MAX    500006
#define   MAX1   10000008
#define   mem(a,v)   memset(a,v,sizeof(a))
#define   lcm(a, b)        ((a)*((b)/__gcd(a,b)))
void solve(){

    int a1,a2,a3,b1,b2,b3,K;
    cin>>a1>>a2>>a3>>b1>>b2>>b3>>K;
    
    int a = (a1+a2+a3 + 4) / 5;
    int b = (b1+b2+b3 + 9) / 10;
    
    cout<<(a+b<=K ? "YES" : "NO")<<endl;
}

int main(){

int t=1;
while(t--){
solve();
}
return 0;
}