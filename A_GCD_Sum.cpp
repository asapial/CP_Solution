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
ll digitSum(ll n)
{
    ll ans = 0;
    while(n){
        ans += n % 10;
        n /= 10;
    }
    return ans;

}
void solve(){

ll n;
cin >> n;
while(true){
    if(__gcd(n, digitSum(n)) > 1){
        break;
    } 
    n++;
}
cout << n <<endl;

}

bool test=1;
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
// freopen("input.txt", "r",stdin);
// freopen("output.txt", "w",stdout);
int term=1;
if(test)cin>>term;
while(term--){
solve();
}
return 0;
}