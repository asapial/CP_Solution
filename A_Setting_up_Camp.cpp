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

ll s, p, u;
cin >> s >> p >> u;
ll need = (3 - p % 3) % 3;
if (p > 0 && need > u) {
    cout << -1<<endl;
    return;
}

u -= need;
p += need;

ll mn = s + u / 3 + (u % 3 + 1) / 2 + p / 3;
cout << mn << endl;

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